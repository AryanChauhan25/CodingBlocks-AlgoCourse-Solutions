#include<iostream>
using namespace std;
int main() {
	int cnt[64] = {0};
	int n,no,mx = 0,ans = 0;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>no;
		int j = 0;
		while(no > 0) {
			cnt[j] += no & 1;
			no = no >> 1;
			j++;
			mx = max(mx,j);
		}
	}
	for(int i = 0; i <= mx; i++) {
		cnt[i] = cnt[i] % 3;
	}
	int p = 1;
	for(int i = 0; i <= mx; i++) {
		ans += (cnt[i] * p);
		p = p << 1;
	}
	cout<<ans;
	return 0;
}