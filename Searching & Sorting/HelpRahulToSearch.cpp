#include<bits/stdc++.h>
using namespace std;

int searchInRotatedAndSortedArray(int *a, int n, int target) {
    int s = 0;
    int e = n - 1;
    while(s <= e) {
        int mid = (s + e) / 2;
        if(a[mid] == target) {
            return mid;
        }
        if(a[mid] >= a[s]) {
            if(a[mid] >= target && a[s] <= target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        else if(a[mid] <= a[e]) {
            if(a[mid] <= target && a[e] >= target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
	int n,target;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>target;
    cout<<searchInRotatedAndSortedArray(a,n,target);
	return 0;
}