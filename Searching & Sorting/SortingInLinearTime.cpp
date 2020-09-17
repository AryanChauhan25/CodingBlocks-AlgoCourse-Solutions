#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

void linearSort(ll *a, ll n) {
    ll s = 0;
    ll mid = 0;
    ll e = n - 1;
    while(mid < e) {
        if(a[mid] == 0) {
            swap(a[mid],a[s]);
            s++;
            mid++;
        }
        else if(a[mid] == 1) {
            mid++;
        }
        else if(a[mid] == 2) {
            swap(a[mid],a[e]);
            e--;
        }
    }
}

int main() {
    hypertest
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    linearSort(a,n);
    for(ll i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }
    return 0;
}