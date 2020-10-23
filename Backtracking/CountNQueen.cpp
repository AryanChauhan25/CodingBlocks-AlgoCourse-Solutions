#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bitset<30> d1,d2,col;

void nQueenSolver(int r, int n, int &ans) {
    if(r == n) {
        ans++;
        return;
    }
    for(int c = 0; c < n; c++) {
        if(!col[c] && !d1[r - c + n - 1] && !d2[r + c]) {
            col[c] = d1[r - c + n - 1] = d2[r + c] = 1;
            nQueenSolver(r+1,n,ans);
            col[c] = d1[r - c + n - 1] = d2[r + c] = 0;
        }
    }
}

int main() {
    int n, ans = 0;
    cin>>n;
    nQueenSolver(0,n,ans);
    cout<<ans;
    return 0;
}