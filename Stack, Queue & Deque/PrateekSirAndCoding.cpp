#include<bits/stdc++.h>
using namespace std;
int main () {
	int q;
	cin>>q;
	stack<int> s;
	while(q--) {
		int x,y;
		cin>>x;
		if(x == 2) {
			cin>>y;
			s.push(y);
		}
		else {
			if(!s.empty()) {
				cout<<s.top()<<"\n";
				s.pop();
			}
			else {
				cout<<"No Code\n";
			}
		}
	}
	return 0;
}