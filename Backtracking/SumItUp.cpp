#include <bits/stdc++.h>
using namespace std;

map <vector<int>,int> m;
int k = 0;

void sumItUp(int *a,int n,int i,int j,int tar,int *out) {
    if(i == n) {
        int sum = 0;
        for(int x = 0; x < j; x++) {
           sum += out[x];
        }
        if(sum == tar) {
            int x = 0;
            vector<int> v;
            for( ; x < j; x++) {
                v.push_back(out[x]);
            }
            m[v] = k++;
        }
        return;
    }
    out[j] = a[i];
    sumItUp(a,n,i+1,j+1,tar,out);
    sumItUp(a,n,i+1,j,tar,out);

}

int main() {
    int n, tar;
    cin>>n;
    int a[n], out[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a, a + n);
    cin>>tar;
    sumItUp(a,n,0,0,tar,out);
    for(auto it = m.begin(); it != m.end(); it++) { 
        vector<int> v = it->first;
        for(int i = 0; i < v.size(); i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}