#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ans = 0;
		cin>>n;
		while(n > 0) {
			n = n & (n - 1);
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}