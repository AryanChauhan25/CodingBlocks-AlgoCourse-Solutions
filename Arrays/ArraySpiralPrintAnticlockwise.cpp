#include<iostream>
using namespace std;

void spiralPrint(int matrix[][11], int n, int m) {
	int startRow = 0, endRow = n - 1, startCol = 0, endCol = m - 1;
	while(startRow <= endRow && startCol <= endCol) {
		for(int i = startRow; i <= endRow; i++) {
			cout<<matrix[i][startCol]<<", ";
		}
		startCol++;
		for(int i = startCol; i <= endCol; i++) {
			cout<<matrix[endRow][i]<<", ";
		}
		endRow--;
		if(endCol >= startCol) {
			for(int i = endRow; i >= startRow; i--) {
				cout<<matrix[i][endCol]<<", ";
			}
			endCol--;
		}
		if(endRow >= startRow) {
			for(int i = endCol; i >= startCol; i--) {
				cout<<matrix[startRow][i]<<", ";
			}
			startRow++;
		}
	}
	cout<<"END";
}

int main() {
	int n,m;
	cin>>n>>m;
	int matrix[11][11];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin>>matrix[i][j];
		}
	}
	spiralPrint(matrix,n,m);
	return 0;
}