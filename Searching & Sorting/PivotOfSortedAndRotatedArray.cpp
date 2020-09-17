#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int s = 0;
    int e = n - 1;
    while(s <= e) {
        int mid = (s + e) / 2;
        if(mid > s && a[mid] < a[mid - 1]) {
            cout<<mid - 1;
            return 0;
        }
        if(mid < e && a[mid] > a[mid + 1]) {
            cout<<mid;
            return 0;
        }
        if(a[mid] <= a[s]) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
	return 0;
}