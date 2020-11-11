#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> primes;
vector<ll> p(10001,0);
void seive() {
    primes.push_back(2);
    p[0] = p[1] = 0;
    p[2] = 1;
    for(int i = 3; i < 10001; i += 2) {
        p[i] = 1;
    }
    for(int i = 3; i < 10001; i += 2) {
        if(p[i]) {
            for(int j = i * i; j < 10001; j += (2 * i)) {
                p[j] = 0;
            }
        }
    }
    for(int i = 3; i < 10001; i += 2) {
        if(p[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    seive();
    ll n,q,x;
    cin>>n>>q;
    stack<ll> s1[100001],s2;
    for(int i = 0; i < n; i++) {
        cin>>x;
        s1[0].push(x);
    }
    for(int i = 1; i <= q; i++) {
        ll currentPrime = primes[i - 1];
        while(!s1[i - 1].empty()) {
            if(s1[i - 1].top() % currentPrime == 0) {
                s2.push(s1[i - 1].top());
            }
            else {
                s1[i].push(s1[i - 1].top());
            }
            s1[i - 1].pop();
        }
        while(!s2.empty()) {
            cout<<s2.top()<<"\n";
            s2.pop();
        }
    }
    while(!s1[q].empty()) {
        cout<<s1[q].top()<<"\n";
        s1[q].pop();
    }
    return 0;
}