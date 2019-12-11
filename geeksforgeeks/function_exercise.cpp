#include<iostream>
using namespace std;

int sum(int &a, int &b, int &c) {
	return a+b+c;
}

int main() {
	unsigned int testCase;
	cout<<"Number of test case? "; cin>>testCase;
	for(int i=0;i<testCase;++i) {
		cout<<"TEST CASE "<<i+1<<":\n";
		int a, b, c;
		cout<<"Enter 3 numbers:\n";
		cin>>a>>b>>c;
		cout<<"--> SUM = "<<sum(a,b,c)<<"\n";
	}
}
