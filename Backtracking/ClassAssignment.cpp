#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll f[31];

void fib() {
    f[0] = 0;
    f[1] = f[2] = 1;
    for(int i = 3; i <= 30; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main() {
    fib();
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++) {
        int n;
        cin>>n;
        cout<<"#"<<i<<" : "<<f[n+2]<<'\n';
    }
    return 0;
}