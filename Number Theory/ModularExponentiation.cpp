#include<iostream>
using namespace std;
#define ll long long int
ll power(ll a, ll b, ll c) {
	a = a % c;
	if(a == 0) {
		return 0;
	}
	ll ans = 1;
	while(b > 0) {
		if(b & 1) {
			ans = (ans * a) % c;
		}
		a = (a * a) % c;
		b = b >> 1;
	}
	return ans;
}
int main() {
	ll a,b,c;
	cin>>a>>b>>c;
	cout<<power(a,b,c);
	return 0;
}
