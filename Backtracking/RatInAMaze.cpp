#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool ratInMaze(char maze[][1001], int sol[][1001], int i, int j, int n, int m) {
    if(i == n - 1 && j == m - 1) {
        sol[i][j] = 1;
        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                cout<<sol[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(maze[i][j] == 'X') {
        return false;
    }
    if(i >= n || j >= m) {
        return false;
    }
    sol[i][j] = 1;
    bool rightSuccess = ratInMaze(maze,sol,i,j+1,n,m);
    if(rightSuccess) {
        return true;
    }
    bool downSuccess = ratInMaze(maze,sol,i+1,j,n,m);
    sol[i][j] = 0;
    if(rightSuccess || downSuccess) {
        return true;
    }
    return false;
}

int main() {
    char maze[1001][1001];
    int n,m;
    cin>>n>>m;
    int sol[1001][1001];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>maze[i][j];
            sol[i][j] = 0;
        }
    }
    if(maze[n-1][m-1] == 'X' || maze[0][0] == 'X') {
        cout<<"-1";
        return 0;
    }
    bool ans = ratInMaze(maze,sol,0,0,n,m);
    if(!ans) {
        cout<<"-1";
    }
    return 0;
}