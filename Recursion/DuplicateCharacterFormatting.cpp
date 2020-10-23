#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void duplicateFormatting(char *s,int n) {
    if(n == 0) {
        return;
    }
    if(s[n] == s[n - 1]) {
        for(int i = strlen(s); i > n; i--) {
            s[i] = s[i - 1];
        }
        s[n] = '*';
    }
    return duplicateFormatting(s,n - 1);
}

int main() {
	char s[10001];
    cin>>s;
    duplicateFormatting(s,strlen(s));
    cout<<s;
	return 0;
}