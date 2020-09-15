#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
    cin>>s;
    int len = s.length();
    for(int i = 0; i < len - 1; i++) {
        int difference = (s[i + 1] - 'a') - (s[i] - 'a');
        cout<<s[i]<<difference;
    }
    cout<<s[len - 1];
	return 0;
}