#include<iostream>
using namespace std;
int main() {
	char s;
	cin>>s;
	if(s >= 'a' && s <= 'z') cout<<"L";
	else if(s >= 'A' && s <= 'Z') cout<<"U";
	else cout<<"I";
	return 0;
}