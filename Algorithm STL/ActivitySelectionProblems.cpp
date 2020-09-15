#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int>p2) {
    return p1.second < p2.second;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,ans = 1,chooseActivity = 0;
        cin>>n;
        pair<int,int> p[n];
        for(int i = 0; i < n; i++) {
            int a,b;
            cin>>a>>b;
            p[i] = make_pair(a,b);
        }
        sort(p,p+n,compare);
        for(int i = 1; i < n; i++) {
            if(p[i].first >= p[chooseActivity].second) {
                ans++;
                chooseActivity = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}