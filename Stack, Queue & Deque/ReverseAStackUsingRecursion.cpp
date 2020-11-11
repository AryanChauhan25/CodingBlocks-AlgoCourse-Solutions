#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int value) {
	if(s.empty()) {
		s.push(value);
		return;
	}
	int top = s.top();
	s.pop();
	insertAtBottom(s,value);
	s.push(top);
}

void reverseStackUsingRecursion(stack<int>& s) {
	if(s.empty()) {
		return;
	}
	int top = s.top();
	s.pop();
	reverseStackUsingRecursion(s);
	insertAtBottom(s,top);
}

int main() {
	int n,x;
	cin>>n;
	stack<int> s;
	for(int i = 0; i < n; i++) {
		cin>>x;
		s.push(x);
	}
	reverseStackUsingRecursion(s);
	while(!s.empty()) {
		cout<<s.top()<<"\n";
		s.pop();
	}
	return 0;
}