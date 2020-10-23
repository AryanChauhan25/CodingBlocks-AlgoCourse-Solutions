#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int partition(ll *a, int s, int e) {
	int i = s - 1;
	int j = s;
	int p = a[e];
	while(j < e) {
		if(a[j] <= p) {
			i++;
			swap(a[i], a[j]);
		}
		j++;
	}
	swap(a[e],a[i + 1]);
	return i + 1;
}

void quickSort(ll *a, int s, int e) {
	if(s >= e) {
		return;
	}
	int p = partition(a,s,e);
	quickSort(a,s,p-1);
	quickSort(a,p,e);
}

int main() {
	int n;
	cin>>n;
	ll a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	for(int i = 0; i < n ; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}