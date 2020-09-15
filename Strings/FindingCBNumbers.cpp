#include<bits/stdc++.h>
using namespace std;
int cbNumber[10] = {2,3,5,7,11,13,17,19,23,29};

bool iscbNumber(long long s) {
    if(s == 0 || s == 1) return false;
    for(int i = 0; i < 10; i++) {
        if(s == cbNumber[i]) return true;
    }
    for(int i = 0; i < 10; i++) {
        if(s % cbNumber[i] == 0) return false;
    }
    return true;
}

bool isValid(bool visited[17], int start, int end, string str) {
    for(int i = start; i < end; i++) {
        if(visited[i]) return false;
    }
    return true;
}

int main() {
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    bool visited[n];
    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= n - i; j++) {
            int end = j + i;
            string str = s.substr(j,i);
            if(iscbNumber(stoll(str)) && isValid(visited,j,end,str)) {
                ans++;
                for(int k = j; k < end; k++) {
                    visited[k] = true;
                }
            }
        }
    }
    cout<<ans;
	return 0;
}