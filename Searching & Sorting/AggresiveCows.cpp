#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n,c;
    cin>>n>>c;
    ll stalls[n];
    for(int i = 0; i < n; i++) {
        cin>>stalls[i];
    }
    sort(stalls, stalls + n);
    ll s = 0;
    ll e = stalls[n - 1];
    ll ans = 0;
    while(s <= e) {
        ll mid = (s + e) / 2;
        ll noOfCows = 1;
        ll positionOfCow = stalls[0];
        for(int i = 0; i < n; i++) {
            if(stalls[i] - positionOfCow >= mid) {
                positionOfCow = stalls[i];
                noOfCows++;
            }
            if(noOfCows >= c) {
                ans = mid;
                s = mid + 1;
                break;
            }
        }
        if(noOfCows < c) {
            e = mid - 1;
        }
    }
    cout<<ans;
	return 0;
}