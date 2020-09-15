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
	for(int i = 0; i < n; i++) {
		int s = i + 1, e = n - 1;
		while(s < e) {
			if(a[s] + a[e] == target - a[i]) {
				cout<<a[i]<<", "<<a[s]<<" and "<<a[e]<<endl;
				s++;
				e--;
			}
			else if(a[s] + a[e] > target - a[i]) {
				e--;
			}
			else {
				s++;
			}
		}
	}
	return 0;
}