#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hypertest ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,s,e) for(int i = s; i < e; i++)
#define rloop(i,s,e) for(int i = e; i >= s; i--)
const ll MOD = 1000000007;

bool compare(string s1, string s2) {
    if(s1.find(s2) == 0 || s2.find(s1) == 0) {
        return s1.length() > s2.length();
    }
    return s1 < s2;
}

int main() {
    hypertest
    int n;
    cin>>n;
    string s[n];
    for(int i = 0; i < n; i++) {
        cin>>s[i];
    }
    sort(s, s + n, compare);
    for(int i = 0; i < n; i++) {
        cout<<s[i]<<endl;
    }
    return 0;
}