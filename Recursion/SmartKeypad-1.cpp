#include <bits/stdc++.h>
using namespace std;
#define ll long long int

char table[][11] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void smartKeypad(char *input, char *output, int i, int j) {
    if(input[i] == '\0') {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }
    int number = input[i] - '0';
    for(int k = 0; table[number][k] != '\0'; k++) {
        output[j] = table[number][k];
        smartKeypad(input,output,i+1,j+1);
    }
}

int main() {
    char input[11];
    cin>>input;
    char output[11];
    smartKeypad(input,output,0,0);
    return 0;
}