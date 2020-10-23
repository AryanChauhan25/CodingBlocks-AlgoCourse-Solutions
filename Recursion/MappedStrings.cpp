#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void mappedStrings(char *input, char *out, int i, int j) {
    if(input[i] == '\0') {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    int digit = input[i] - '0';
    char ch = digit + 'A' - 1;
    out[j] = ch;
    mappedStrings(input,out,i + 1,j + 1);
    if(input[i + 1] != '\0') {
        int digit2 = input[i + 1] - '0';
        int number = (digit * 10) + digit2;
        if(number < 27) {
            char ch = number + 'A' - 1;
            out[j] = ch;
            mappedStrings(input,out,i + 2,j + 1);
        }
    }
    return;
}

int main() {
    char input[11];
    char out[11];
    cin>>input;
    mappedStrings(input,out,0,0);
	return 0;
}