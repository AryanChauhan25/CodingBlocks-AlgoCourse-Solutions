#include<iostream>
#include<climits>
using namespace std;
int main () {
	int a,b,ans = INT_MIN;
	cin>>a>>b;
	for(int i = a; i < b; i++) {
		for(int j = i + 1; j <= b; j++) {
			int xorr = i ^ j;
			ans = max(ans,xorr);
		}
	}
	cout<<ans;
	return 0;
}