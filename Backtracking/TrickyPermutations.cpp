#include <bits/stdc++.h>
using namespace std;
#define ll long long int

set<string> s;

void uniquePermutations(char *input, int i) {
    if(input[i] == '\0') {
        s.insert(input);
        return;
    }
    for(int j = i; input[j] != '\0'; j++) {
        swap(input[i],input[j]);
        uniquePermutations(input,i+1);
        swap(input[i],input[j]);
    }
}

int main() {
    char input[10];
    cin>>input;
    uniquePermutations(input,0);
    for(auto x : s) {
        cout<<x<<endl;
    }
    return 0;
}