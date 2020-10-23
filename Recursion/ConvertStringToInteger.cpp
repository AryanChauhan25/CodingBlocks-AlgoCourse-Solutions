#include<iostream>
using namespace std;
#define ll long long int

ll stringToInt(string s, int n) {
    if(n == 0) {
        return 0;
    }
    int number = s[n - 1] - '0';
    ll ans = stringToInt(s,n - 1);
    return (ans * 10) + number;
}

int main() {
	string s;
    cin>>s;
    int n = s.length();
    cout<<stringToInt(s,n);
	return 0;
}