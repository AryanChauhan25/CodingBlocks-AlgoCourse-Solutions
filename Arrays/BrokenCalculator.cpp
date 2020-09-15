#include<bits/stdc++.h>
using namespace std;

int multiply(int x, int res[], int res_size) {
    int carry = 0;
    for(int i = 0; i < res_size; i++) {
        int product = (res[i] * x) + carry;
        carry = product / 10;
        res[i] = product % 10;
    }
    while(carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void fib(int n) {
    int res[5001];
    res[0] = 1;
    int res_size = 1;
    for(int x = 2; x <= n; x++) {
        res_size = multiply(x,res,res_size);
    }
    for(int i = res_size - 1; i >= 0; i--) {
        cout<<res[i];
    }
}

int main() {
	int n;
    cin>>n;
    fib(n);
    return 0;
}