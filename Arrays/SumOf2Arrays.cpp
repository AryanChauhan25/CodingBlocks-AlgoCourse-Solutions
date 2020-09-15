#include<bits/stdc++.h>
using namespace std;

int main() {
	int n1,n2;
    cin>>n1;
    vector<int> a(n1);
    for(int i = 0; i < n1; i++) cin>>a[i];
    cin>>n2;
    vector<int> b(n2);
    for(int i = 0; i < n2; i++) cin>>b[i];
    if(n1 > n2) {
        int j = n2 - 1, carry = 0, sum;
        for(int i = n1 - 1; i >= 0; i--) {
            if(j < 0) sum = a[i] + carry;
            else sum = a[i] + b[j] + carry;
            a[i] = sum % 10;
            carry = sum / 10;
            j--;
        }
        while(carry) {
            a.insert(a.begin(), carry);
            carry = carry / 10;
            n1++;
        }
        for(int i = 0; i < n1; i++) cout<<a[i]<<", ";
        cout<<"END";
    }
    else {
        int j = n1 - 1, carry = 0, sum;
        for(int i = n2 - 1; i >= 0; i--) {
            if(j < 0) sum = b[i] + carry;
            else sum = b[i] + a[j] + carry;
            b[i] = sum % 10;
            carry = sum / 10;
            j--;
        }
        while(carry) {
            b.insert(b.begin(),carry);
            carry = carry / 10;
            n2++;
        }
        for(int i = 0; i < n2; i++) cout<<b[i]<<", ";
        cout<<"END";
    }
    return 0;
}