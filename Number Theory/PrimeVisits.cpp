#include<iostream>
using namespace std;
#define ll long long int
bool p[1000001];
ll cs[1000001];
void primeSieve() {
	for(ll i = 3; i < 1000001; i += 2) {
		p[i] = 1;
	}
	for(ll i = 3; i < 1000001; i += 2) {
		if(p[i]) {
			for(ll j = i * i; j < 1000001; j += (2 * i)) {
				p[j] = 0;
			}
		}
	}
	p[0] = 0, p[1] = 0, p[2] = 1;
	cs[0] = 0;
	for(ll i = 1; i < 1000001; i++) {
		cs[i] = cs[i - 1] + int(p[i]);
	}
}

int main() {
	primeSieve();
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<cs[b - 1] - cs[a - 1]<<endl;
	}
	return 0;
}