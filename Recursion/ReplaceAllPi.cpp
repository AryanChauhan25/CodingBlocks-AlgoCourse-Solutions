#include<iostream>
#include<cstring>
using namespace std;

void solve(string s, int i, int n) {
	if(i == n) {
		return;
	}
	if(s[i] == 'p' && s[i + 1] == 'i') {
		cout<<"3.14";
		solve(s,i+2,n);
	}
	else {
		cout<<s[i];
		solve(s,i+1,n);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n = s.length();
		solve(s,0,n);
		cout<<"\n";
	}
	return 0;
}