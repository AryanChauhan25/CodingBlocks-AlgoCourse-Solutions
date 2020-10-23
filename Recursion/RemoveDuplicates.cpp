#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void removeDuplicate(string s, int i) {
    if(i == s.length()) {
        return;
    }
    if(s[i] != s[i + 1]) {
        cout<<s[i];
    }
    return removeDuplicate(s,i + 1);
}

int main() {
	string s;
    cin>>s;
    removeDuplicate(s,0);
	return 0;
}