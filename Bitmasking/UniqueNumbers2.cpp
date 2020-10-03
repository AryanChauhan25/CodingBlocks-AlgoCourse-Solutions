#include<iostream>
using namespace std;
int main() {
	int n,xorr = 0;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
		xorr = xorr ^ a[i];
	}
	int pos = 0;
	int temp = xorr;
	while((temp & 1) != 1) {
		pos++;
	}
	int mask = 1 << pos;
	int n1 = 0;
	for(int i = 0; i < n; i++) {
		if(mask & a[i]) {
			n1 = n1 ^ a[i];
		}
	}
	int n2 = xorr ^ n1;
	cout<<min(n1,n2)<<" "<<max(n1,n2);
	return 0;
}