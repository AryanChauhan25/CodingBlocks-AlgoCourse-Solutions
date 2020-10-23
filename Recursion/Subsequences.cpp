#include<iostream>
#include<cstring>
using namespace std;

int printSubsequence(char *input, char *output, int i, int j) {
	if(input[i] == '\0') {
		output[j] = '\0';
		cout<<output<<" ";
		return 1;
	}
	int count2 = printSubsequence(input,output,i+1,j);
	output[j] = input[i];
	int count1 = printSubsequence(input,output,i+1,j+1);
	return count1 + count2;
}

int main() {
	char input[101];
	char output[101];
	cin.getline(input,101);
	int ans = printSubsequence(input,output,0,0);
	cout<<endl<<ans;
    return 0;
}