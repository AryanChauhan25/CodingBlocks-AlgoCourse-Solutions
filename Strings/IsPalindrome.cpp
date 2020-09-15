#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int *a, int s, int e) {
    if(s > e) return true;
    if(a[s] == a[e]) {
        return isPalindrome(a,s + 1, e - 1);
    }
    return false;
}

int main() {
	int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    if(isPalindrome(a,0,n-1)) cout<<"true";
    else cout<<"false";
	return 0;
}