#include <iostream>
using namespace std;

int a[1000000];

int optimalgame(int i,int j) {
    if(i > j) {
        return 0;
    }
    if(i + 1 == j) {
        return max(a[i],a[j]);
    }
    int k = a[i] + min(optimalgame(i + 2, j), optimalgame(i + 1, j - 1));
    int y = a[j] + min(optimalgame(i + 1, j - 1), optimalgame(i, j - 2));
    return max(k,y);
}

int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<optimalgame(0,n-1);
    return 0;
}