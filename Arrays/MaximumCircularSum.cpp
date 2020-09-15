#include<bits/stdc++.h>
using namespace std;

int kadane(int *a, int n) {
    int ms = INT_MIN, cs = 0;
    for(int i = 0; i < n; i++) {
        cs += a[i];
        if(cs < 0) cs = 0;
        ms = max(cs,ms);
    }
    return ms;
}

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        int ans1 = kadane(a,n);
        int cs = 0;
        for(int i = 0; i < n; i++) {
            cs += a[i];
            a[i] = -a[i];
        }
        int k = kadane(a,n);
        int ans2 = k + cs;
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}