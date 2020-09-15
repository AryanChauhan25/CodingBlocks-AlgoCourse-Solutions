#include<bits/stdc++.h>
using namespace std;
bool mycompare(string s1,string s2) {
    string XY = s1.append(s2);
    string YX = s2.append(s1);
    return XY.compare(YX) > 0 ? 1 : 0;
}
int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<string> a;
        for(int i = 0; i < n; i++) {
            string num;
            cin>>num;
            a.push_back(num);
        }
        sort(a.begin(),a.end(),mycompare);
        for(int i = 0; i < n; i++) cout<<a[i];
        cout<<endl;
    }
    return 0;
}