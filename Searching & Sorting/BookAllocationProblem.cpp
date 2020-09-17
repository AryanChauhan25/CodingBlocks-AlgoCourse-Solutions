#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n, m, sum = 0;
        cin>>n>>m;
        int books[n];
        for(int i = 0; i < n; i++) {
            cin>>books[i];
            sum += books[i];
        }
        int s = books[n - 1];
        int e = sum;
        int ans = s;
        while(s <= e) {
            int mid = (s + e) / 2;
            int noOfStudents = 1;
            int noOfPages = 0;
            for(int i = 0; i < n; i++) {
                noOfPages += books[i];
                if(noOfPages > mid) {
                    noOfStudents++;
                    noOfPages = books[i];
                }
            }
            if(noOfStudents <= m) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}