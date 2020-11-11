#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n, x, time;
	cin>>n;
	queue<ll> q1 ,q2;
	for(int i = 0; i < n; i++) {
		cin>>x;
		q1.push(x);
	}
	for(int i = 0; i < n; i++) {
		cin>>x;
		q2.push(x);
	}
	while(!q2.empty()) {
		while(q1.front() != q2.front()) {
			int top = q1.front();
			q1.pop();
			q1.push(top);
			time++;
		}
		time++;
		q2.pop();
		q1.pop();
	}
	cout<<time;
	return 0;
}