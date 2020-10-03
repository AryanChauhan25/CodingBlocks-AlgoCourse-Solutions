#include<iostream>
using namespace std;
int main() {
	int q;
	cin>>q;
	while(q--) {
		int a,b,ans = 0;
		cin>>a>>b;
		for(int i = a; i <= b; i++) {
			int no = i;
			while(no > 0) {
				ans++;
				no = no & (no - 1);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}