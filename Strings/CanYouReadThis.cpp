#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[1001];
	cin.getline(s,1001,' ');
    for(int i = 0; i < strlen(s); i++) {
        if(isupper(s[i]) && i != 0) cout<<endl<<s[i];
        else cout<<s[i];
    }
	return 0;
}