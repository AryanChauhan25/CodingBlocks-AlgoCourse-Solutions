#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

void bubbleSort(ll *a, ll n) {
    for(ll i = 0; i < n - 1; i++) {
        for(ll j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j],a[j + 1]);
            }
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
    bubbleSort(a,n);
    for(ll i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }
    return 0;
}