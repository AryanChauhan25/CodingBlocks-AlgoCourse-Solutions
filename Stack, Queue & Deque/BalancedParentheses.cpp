#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str) {
	stack<char> s;
	int n = str.length();
	for(int i = 0; i < n; i++) {
		if(str[i] == '(') {
			s.push('(');
		}
		else if(str[i] == ')') {
			if(!s.empty() && s.top() == '(') {
				s.pop();
			}
		}
		if(str[i] == '{') {
			s.push('{');
		}
		else if(str[i] == '}') {
			if(!s.empty() && s.top() == '{') {
				s.pop();
			}
		}
		if(str[i] == '[') {
			s.push('[');
		}
		else if(str[i] == ']') {
			if(!s.empty() && s.top() == '[') {
				s.pop();
			}
		}
	}
	return s.empty();
}

int main() {
	string str;
	cin>>str;
	if(isBalanced(str)) {
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
	return 0;
}