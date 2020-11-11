#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		string str;
		cin>>str;
		int flag = 0, n = str.length();
		stack<char> s;
		for(int i = 0; i < n; i++) {
			if(str[i] == ')') {
				if(s.top() == '(') {
					flag = 1;
				}
				while(!s.empty() && s.top() != '(') {
					s.pop();
				}
				if(!s.empty()) {
					s.pop();
				}
			}
			else {
				s.push(str[i]);
			}
		}
		if(flag) {
			cout<<"Duplicate\n";
		}
		else{
			cout<<"Not Duplicates\n";
		}
	}
	return 0;
}