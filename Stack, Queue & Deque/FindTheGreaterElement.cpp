#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin>>n;
	ll a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	for(int i = 0; i < n - 1; i++) {
		if(a[i + 1] > a[i]) {
			cout<<a[i + 1]<<" ";
		}
		else {
			cout<<"-1 ";
		}
	}
	if(a[0] > a[n - 1]) {
		cout<<a[0];
	}
	else {
		cout<<"-1";
	}
	return 0;
}