#include<bits/stdc++.h>
using namespace std;

int lowerBound(int a[], int n, int target) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while(s <= e) {
		int mid = (s + e) / 2;
		if(a[mid] == target) {
			ans = mid;
			e = mid - 1;
		}
		else if(a[mid] > target) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}

int upperBound(int a[], int n, int target) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while(s <= e) {
		int mid = (s + e) / 2;
		if(a[mid] == target) {
			ans = mid;
			s = mid + 1;
		}
		else if(a[mid] > target) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}

int main() {
	int n,q;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	cin>>q;
	while(q--) {
		int num;
		cin>>num;
		cout<<lowerBound(a,n,num)<<" "<<upperBound(a,n,num)<<"\n";
	}
	return 0;
}