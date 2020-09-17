#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

ll binarySearch(ll a[], ll n, ll m) {
    ll s = 0;
    ll e = n - 1;
    while(s <= e) {
        ll mid = (s + e) / 2;
        if(a[mid] == m) {
            return mid;
        }
        else if(a[mid] > m) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    hypertest
    ll n,m;
    cin>>n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>m;
    cout<<binarySearch(a,n,m);
    return 0;
}