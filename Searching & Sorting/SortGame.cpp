#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

bool compare(pair<string,int> &p1, pair<string,int> &p2) {
    if(p1.second == p2.second) {
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
}

int main() {
    hypertest
    int n,x;
    cin>>x>>n;
    pair<string,int> p[n];
    for(int i = 0; i < n; i++) {
        string s;
        int value;
        cin>>s;
        cin>>value;
        p[i] = make_pair(s,value);
    }
    sort(p, p + n, compare);
    for(int i = 0; i < n; i++) {
        if(p[i].second < x) {
            continue;
        }
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}