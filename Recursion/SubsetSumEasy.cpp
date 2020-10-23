#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool subsetSum(int *a, int sum, int i, int n) {
    if(i == n) {
        return false;
    }
    sum += a[i];
    if(sum == 0) {
        return true;
    }
    bool ans1 = subsetSum(a,sum,i+1,n);
    sum -= a[i];
    bool ans2 = subsetSum(a,sum,i+1,n);
    if(ans1 || ans2) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        if(subsetSum(a,0,0,n)) {
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
        cout<<"\n";
    }
    return 0;
}