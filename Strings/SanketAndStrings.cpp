#include<bits/stdc++.h>
using namespace std;

int countMaxSize(string s, int k, char ch) {
    int i = 0, j = 0, count = 0, ans = 0;
    for(j; count < k && j < s.size() - 1; j++) {
        if(s[j] != ch) count++;
        if(count == k) break;
    }
    while(i < j) {
        while(j < s.size() - 1 && s[j + 1] == ch) j++;
        int currentLength = j - i + 1;
        ans = max(ans, currentLength);
        i++;
        if(j < s.size() - 1 && s[i - 1] != ch) j++;
    }
    return ans;
}

int main() {
    int k;
    cin>>k;
    string s;
    cin>>s;
    int len = s.length();
    if(k >= len) cout<<len;
    else {
        int ans1 = countMaxSize(s,k,'a');
        int ans2 = countMaxSize(s,k,'b');
        cout<<max(ans1,ans2);
    }
	return 0;
}