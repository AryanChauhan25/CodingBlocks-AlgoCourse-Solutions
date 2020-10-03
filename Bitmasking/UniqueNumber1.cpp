#include<iostream>
using namespace std;
int main() {
	int n,no,res = 0;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>no;
		res = res ^ no;
	}
	cout<<res;
	return 0;
}
