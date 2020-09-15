#include<bits/stdc++.h>
using namespace std;

bool stairSearch(int matrix[][31], int n, int m, int target) {
    int i = 0, j = m - 1;
    while(j >= 0 && i < n) {
        if(matrix[i][j] == target) return true;
        else if(matrix[i][j] > target) j--;
        else i++;
    }
    return false;
}

int main() {
	int n,m,target;
    cin>>n>>m;
    int matrix[n][31];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>matrix[i][j];
        }
    }
    cin>>target;
    if(stairSearch(matrix,n,m,target)) cout<<"1";
    else cout<<"0";
}