#include <bits/stdc++.h>
using namespace std;
#define ll long long int

set<string> s;

bool compare(char *c1, char *c2) {
    for(int i = 0; c1[i] != '\0'; i++) {
        if(c1[i] > c2[i]) {
            return true;
        }
        else if(c1[i] < c2[i]) {
            return false;
        }
    }
    return false;
}

void dictionaryOrder(char *input, int i, char *inp) {
    if(input[i] == '\0') {
        if(compare(input,inp)) {
            s.insert(input);
        }
        return;
    }
    for(int j = i; input[j] != '\0'; j++) {
        swap(input[i],input[j]);
        dictionaryOrder(input,i+1,inp);
        swap(input[i],input[j]);
    }
}

int main() {
    char input[11],inp[11];
    cin>>input;
    int i = 0;
    while(input[i] != '\0') {
        inp[i] = input[i];
        i++;
    }
    inp[i] = '\0';
    dictionaryOrder(input,0,inp);
    for(auto it : s) {
        cout<<it<<endl;
    }
    return 0;
}