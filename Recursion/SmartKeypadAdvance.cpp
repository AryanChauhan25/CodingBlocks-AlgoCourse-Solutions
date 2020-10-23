#include <bits/stdc++.h>
using namespace std;
#define ll long long int

char table [][10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
char searchIn [][12] = {"prateek", "sneha", "deepak", "arnav", "shikha", "palak", "utkarsh", "divyam", "vidhi", "sparsh", "akku"};
set<string> s;

void smartKeypad(char *input, char *output, int i, int j) {
    if(input[i] == '\0') {
        output[j] = '\0';
        for(int x = 0; x < 11; x++) {
            int a = 0;
            for(int y = 0; searchIn[x][y] != '\0'; y++) {
                if(output[a] == searchIn[x][y]) {
                    a++;
                    if(output[a] == '\0') {
                        s.insert(searchIn[x]);
                        break;
                    }
                }
            }
        }
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
    for(auto i : s) {
        cout<<i<<endl;
    }
    return 0;
}