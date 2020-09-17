#include <iostream>
using namespace std;
int freq[1000000]={0};
int main() {
    int n,max,cmax;
    cin>>n;
    int a[n];
    cin>>a[0];
    freq[a[0]]++;
    max = a[0];
    for(int i = 1; i < n; i++){
        cin>>a[i];
        cmax = a[i];
        freq[a[i]]++;
        if(cmax > max){
            max = cmax;
        }
    }
    for(int i = 0; i <= max; i++){
        if(freq[i] != 0){
            int t = freq[i];
            while(t--){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}