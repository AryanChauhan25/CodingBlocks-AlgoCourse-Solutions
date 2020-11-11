#include<bits/stdc++.h>
using namespace std;
class Queue {
	stack<int> s1, s2;
public :
	bool isEmpty() {
		return s1.size() + s2.size() == 0;
	}
	void push(int d) {
		s1.push(d);
	}
	void pop() {
		if(s1.empty()) {
			return;
		}
		while(s1.size() > 1) {
			s2.push(s1.top());
			s1.pop();
		}
		s1.pop();
		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	int front() {
		int v;
		while(!s1.empty()) {
			v = s1.top();
			s1.pop();
			s2.push(v);
		}
		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
		return v;
	}
};
int main() {
	Queue q;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		q.push(i);
	}
	while(!q.isEmpty()) {
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}