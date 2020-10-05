#include<iostream>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		ll a[n], cs[n] = {0}, sum = 0, ans = 0;
		for(int i = 0; i < n; i++) {
			cin>>a[i];
			sum += a[i];
			sum = ((sum % n) + n) % n;
			cs[sum]++;
		}
		for(int i = 0; i < n; i++) {
            ll product;
            if(i == 0) {
                product = cs[i] + 1;
            }
            else {
                product = cs[i];
            }
            ans += ((product * (product - 1)) / 2);
		}
		cout<<ans<<endl;
	}
	return 0;
}