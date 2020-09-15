#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    int l[n], r[n];
    for(int i = 0; i < n; i++) {
        if(i == 0) l[i] = a[i];
        else {
            if(a[i] > l[i - 1]) l[i] = a[i];
            else l[i] = l[i - 1];
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        if(i == n - 1) r[i] = a[i];
        else {
            if(a[i] > r[i + 1]) r[i] = a[i];
            else r[i] = r[i + 1];
        }
    }
    int water = 0;
    for(int i = 0; i < n; i++) {
        water += min(l[i], r[i]) - a[i];
    }
    cout<<water;
    return 0;
}