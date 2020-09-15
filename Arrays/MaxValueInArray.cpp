#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	long int a[n];
	long int maxNumber = INT_MIN;
	for(int i = 0; i < n; i++) {
		cin>>a[i];
		if(a[i] > maxNumber) {
			maxNumber = a[i];
		}
	}
	cout<<maxNumber;
	return 0;
}