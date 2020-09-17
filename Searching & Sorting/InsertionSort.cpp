#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

void insertionSort(ll *a, ll n) {
    for(ll i = 1; i < n; i++) {
        ll currentValue = a[i];
        ll j = i - 1;
        while(j >= 0 && currentValue < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = currentValue;
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
    insertionSort(a,n);
    for(ll i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}