#include<iostream>
using namespace std;
 
void compute(string &s, int n, int open, int close) {
	if(close == n) {
		cout<<s<<endl;
		return;
	}
	if (open > close) {
		s.append(")");
		compute(s,n,open,close+1);
		s.pop_back();
	}
	if(open < n) {
		s.append("(");
		compute(s,n,open+1,close);
		s.pop_back();
	}
}
int main() {
	int n;
	cin>>n;
	string s;
	compute(s,n,0,0);
	return 0;
}