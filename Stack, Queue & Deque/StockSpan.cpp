#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int prices[n], span[n];
	for(int i = 0; i < n; i++) {
		cin>>prices[i];
	}
	span[0] = 1;
	stack<int> s;
	s.push(0);
	for(int i = 1; i < n; i++) {
		while(!s.empty() && prices[s.top()] < prices[i]) {
			s.pop();
		}
		span[i] = s.empty() ? (i + 1) : (i - s.top());
		s.push(i);
	}
	for(int i = 0; i < n; i++) {
		cout<<span[i]<<" ";
	}
	cout<<"END";
	return 0;
}