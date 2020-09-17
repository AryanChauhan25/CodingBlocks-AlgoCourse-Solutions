#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

void selectionSort(ll *a, ll n) {
    for(ll i = 0; i < n - 1; i++) {
        ll minIndex = i;
        for(ll j = i + 1; j < n; j++) {
            if(a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(a[i],a[minIndex]);
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
    selectionSort(a,n);
    for(ll i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }
    return 0;
}