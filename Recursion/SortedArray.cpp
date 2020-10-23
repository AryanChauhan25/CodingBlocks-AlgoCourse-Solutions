#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isSorted(ll *a, int n) {
	if(n <= 1) {
		return true;
	}
	if(a[0] <= a[1] && isSorted(a+1,n-1)) {
		return true;
	}
	return false;
}

int main() {
	int n;
	cin>>n;
	ll a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	if(isSorted(a,n-1)) {
		cout<<"true";
	}
	else {
		cout<<"false";
	}
	return 0;
}