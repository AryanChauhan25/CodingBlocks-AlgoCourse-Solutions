#include<iostream>
using namespace std;

void wavePrint (int matrix[][11], int r, int c) {
	for(int i = 0; i < c; i++) {
		if(i & 1) {
			for(int j = 0; j < r; j++) {
				cout<<matrix[r - j - 1][i]<<", ";
			}
		}
		else {
			for(int j = 0; j < r; j++) {
				cout<<matrix[j][i]<<", ";
			}
		}
	}
	cout<<"END";
}

int main() {
	int r,c;
	cin>>r>>c;
	int matrix[11][11];
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin>>matrix[i][j];
		}
	}
	wavePrint(matrix, r, c);
	return 0;
}