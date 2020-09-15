#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int freq[26] = {0};
	for(int i = 0; i < s.length(); i++) {
		freq[s[i] - 'a'] ++;
	}
    char res;
    int ans = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i] > ans) {
            ans = freq[i];
            res = i + 'a';
        }
    }
	cout<<res;
	return 0;
}