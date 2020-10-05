#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
bool p[1000001];
vector<int> prime;
void primeSieve() {
	for(ll i = 3; i < 1000001; i += 2) {
		p[i] = true;
	}
	prime.push_back(2);
	for(ll i = 3; i < 1000001; i += 2) {
		if(p[i]) {
			prime.push_back(i);
			for(ll j = i * i; j < 1000001; j += (2 * i)) {
				p[j] = false;
			}
		}
	}
}
int main() {
	primeSieve();
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<prime[n - 1]<<endl;
	}
	return 0;
}