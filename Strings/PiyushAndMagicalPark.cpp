#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k,s,parity=0;
    cin>>n>>m>>k>>s;
    char matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>matrix[i][j];
        }
    }
    if(s < k) cout<<"No";
    else {
        for(int i = 0; i < n; i++) {
            if(parity) break;
            for(int j = 0; j < m; j++) {
                if(s < k) {
                    cout<<"No";
                    parity = 1;
                    break;
                }
                if(matrix[i][j] == '.') s = s - 2;
                else if(matrix[i][j] == '*') s = s + 5;
                else if(matrix[i][j] == '#') break;
                if(j != m - 1) s--;
            }
        }
    }
    if(s >= k) cout<<"Yes"<<endl<<s;
	return 0;
}