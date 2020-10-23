#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> v;

void allIndicies(int *a,int n, int m) {
    if(n == 0) {
        return;
    }
    if(a[n - 1] == m) {
        v.insert(v.begin(),n - 1);
    }
    allIndicies(a,n - 1,m);
}

int main() {
	int n,m;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>m;
    allIndicies(a,n,m);
    for(auto x : v) {
        cout<<x<<" ";
    }
	return 0;
}