#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n,target;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	cin>>target;
	sort(a,a+n);
	int s = 0, e = n - 1;
	while(s < e) {
		if(a[s] + a[e] == target) {
			cout<<a[s]<<" and "<<a[e]<<endl;
			s++;
			e--;
		}
		else if(a[s] + a[e] > target) {
			e--;
		}
		else {
			s++;
		}
	}
	return 0;
}