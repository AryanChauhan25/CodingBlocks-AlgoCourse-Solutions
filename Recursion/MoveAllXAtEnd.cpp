#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string res;

void moveAllX(char *input, int i, int cnt) {
    if(input[i] == '\0') {
        cout<<res;
        for(int j = 0; j < cnt; j++) {
            cout<<"x";
        }
        return;
    }
    if(input[i] == 'x') {
        moveAllX(input,i+1,cnt+1);
    }
    else {
        res += input[i];
        moveAllX(input,i+1,cnt);
    }
}

int main() {
    char input[1001];
    cin>>input;
    moveAllX(input,0,0);
    return 0;
}