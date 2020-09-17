#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

int main() {
    hypertest
    ll n,m,x,y,ans = 0;
    cin>>n>>m>>x>>y;
    ll s = 0;
    ll e = n;
    while(s <= e) {
        ll mid = (s + e) / 2;
        if((mid * x) <= (m + (n - mid) * y)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}