#include<iostream>
using namespace std;
#define ll long long int

int lastOcc(ll *a, int n, int m) {
	if(n == 1) {
		if(a[0] == m) {
			return 0;
		}
		else {
			return -1;
		}
	}
	if(a[n - 1] == m) {
		return n - 1;
	}
	return lastOcc(a,n - 1,m);
}

int main() {
	int n,m;
	cin>>n;
	ll a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	cin>>m;
	cout<<lastOcc(a,n,m);
	return 0;
}