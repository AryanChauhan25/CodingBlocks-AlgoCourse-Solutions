#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
    int matrix[n][n];
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin>>matrix[i][j];
		}
	}
    for(int i = 0; i < n; i++) {
        // int starCol = 0, endCol = n - 1;
        // while(starCol < endCol) {
        //     swap(matrix[i][starCol], matrix[i][endCol]);
        //     starCol++;
        //     endCol--;
        // }
        reverse(matrix[i], matrix[i] + n);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<matrix[i][j]<<" ";
		}
        cout<<endl;
	}
	return 0;
}