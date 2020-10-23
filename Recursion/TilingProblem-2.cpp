#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll tilingProblem(int n, int m) {
    ll dp[n + 1];
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        if(i >= m) {
            dp[i] = (dp[i - 1] + dp[i - m]) % mod;
        }
        else {
            dp[i] = dp[i - 1];
        }
    }
    return dp[n];
}

int main() {
    int t;
    cin>>t;
    while(t--) {
	    int n,m;
        cin>>n>>m;
        cout<<tilingProblem(n,m)<<endl;
    }
	return 0;
}