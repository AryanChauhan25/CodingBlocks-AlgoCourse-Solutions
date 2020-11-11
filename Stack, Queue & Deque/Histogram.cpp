#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n, maxArea = 0;
	cin>>n;
	ll a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	stack<int> s;
	for(int i = 1; i < n; i++) {
		while(!s.empty() && a[s.top()] > a[i]) {
			int top = s.top();
			s.pop();
			ll currentArea = s.empty() ? (a[top] * i) : (a[top] * (i - s.top() - 1));
			maxArea = max(maxArea,currentArea);
		}
		s.push(i);
	}
	int size = s.size();
	while(!s.empty()) {
		ll top = s.top();
		s.pop();
		ll currentArea = a[top] * (size - s.size());
		maxArea = max(maxArea, currentArea);
	}
	cout<<maxArea;
	return 0;
}