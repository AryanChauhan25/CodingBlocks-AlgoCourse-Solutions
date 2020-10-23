#include <bits/stdc++.h>
using namespace std;
#define ll long long int

char table [][10] = {" ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

int smartKeypad(char *input, char *output, int i, int j) {
    if(input[i] == '\0') {
        output[j] = '\0';
        cout<<output<<" ";
        return 1;
    }
    int number = input[i] - '0';
    int cnt = 0;
    for(int k = 0; table[number][k] != '\0'; k++) {
        output[j] = table[number][k];
        cnt += smartKeypad(input,output,i+1,j+1);
    }
    return cnt;
}

int main() {
    char input[11];
    cin>>input;
    char output[11];
    int ans = smartKeypad(input,output,0,0);
    cout<<endl<<ans;
    return 0;
}