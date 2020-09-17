#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n,k;
		cin>>n>>k;
		if(k == 1) {
			cout<<n;
		}
		else {
			ll s = 0;
			ll e = 1000000;
			ll ans = 1;
			while(s <= e) {
				ll mid = (s + e) / 2;
				if(pow(mid,k) > n) {
					e = mid - 1;
				}
				else if(pow(mid,k) <= n) {
					ans = mid;
					s = mid + 1;
				}
			}
            cout<<ans;
		}
		cout<<"\n";
	}
	return 0;
}