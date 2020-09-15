#include<iostream>
using namespace std;
int main() {
	char a;
	cin>>a;
	if(isupper(a)) cout<<"UPPERCASE";
	else if(islower(a)) cout<<"lowercase";
	else cout<<"Invalid";
	return 0;
}