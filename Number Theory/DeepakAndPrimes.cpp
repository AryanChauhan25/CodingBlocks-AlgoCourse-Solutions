#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool v[100000005];
vector<int> prime_vector;

void primeSieve() {
    for(ll i = 3; i < 100000005; i += 2) {
        v[i] = true;
    }
    prime_vector.push_back(2);
    for(ll i = 3; i < 100000005; i += 2) {
        if(v[i]) {
            prime_vector.push_back(i);
            for(ll j = (i * i); j < 100000005; j += (2 * i)) {
                v[j] = false;
            }
        }
    }
}
int main() {
    ll n;
    cin>>n;
    primeSieve();
    cout<<prime_vector[n - 1];
    return 0;
}