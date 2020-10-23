#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool canPlace(int grid[][10], int i, int j, int number, int n) {
    for(int x = 0; x < n; x++) {
        if(grid[i][x] == number || grid[x][j] == number) {
            return false;
        }
    }
    int rt = sqrt(n);
    int sx = (i / rt) * rt;
    int sy = (j / rt) * rt;
    for(int x = sx; x < (sx + rt); x++) {
        for(int y = sy; y < (sy + rt); y++) {
            if(grid[x][y] == number) {
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int grid[][10], int i, int j, int n) {
    if(i == n) {
        for(int x = 0; x < n; x++) {
            for(int y = 0; y < n; y++) {
                cout<<grid[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j == n) {
        return sudokuSolver(grid,i+1,0,n);
    }
    if(grid[i][j] != 0) {
        return sudokuSolver(grid,i,j+1,n);
    }
    for(int number = 1; number <= n; number++) {
        if(canPlace(grid,i,j,number,n)) {
            grid[i][j] = number;
            if(sudokuSolver(grid,i,j+1,n)) {
                return true;
            }
            grid[i][j] = 0;
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    int grid[10][10];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>grid[i][j];
        }
    }
    bool ans = sudokuSolver(grid,0,0,n);
    return 0;
}