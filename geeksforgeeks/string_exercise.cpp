#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int testCase;
	cout<<"Number of test case? "; cin>>testCase;
	for(int i=0;i<testCase;++i) {
		cout<<"\nTEST CASE "<<i+1<<":\n";
		//CODE...
		string str1, str2;
		cout<<"First string: ";cin>>str1;
		cout<<"Second string: ";cin>>str2;
		if(str1.length() < str2.length())
			cout<<str2.length()<<endl;
		else
			cout<<str1.length()<<endl;
		cout<<str1+str2<<endl;
	}
	return 0;
}
