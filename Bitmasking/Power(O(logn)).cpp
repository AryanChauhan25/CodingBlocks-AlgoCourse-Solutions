#include<iostream>
using namespace std;
int main() {
	int a,b,ans=1;
	cin>>a>>b;
	while(b > 0) {
		if(b & 1) {
			ans = ans * a;
		}
		a = a * a;
		b = b >> 1;
	}
	cout<<ans;
	return 0;
}