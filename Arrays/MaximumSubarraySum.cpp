#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		long int a[n];
		long int ms = INT_MIN, cs = 0;
		for(int i = 0; i < n; i++) cin>>a[i];
		for(int i = 0; i < n; i++) {
			cs += a[i];
			if(cs < 0) cs = 0;
			if(ms < cs) ms = cs;
		}
		cout<<ms<<"\n";
	}
	return 0;
}