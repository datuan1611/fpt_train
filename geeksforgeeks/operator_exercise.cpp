#include<iostream>
using namespace std;

int main() {
	unsigned int testCase;
	int a, b;
	cout<<"Number of test cases? "; cin>>testCase;
	for(auto i=0;i<testCase;++i) {
		cout<<"TEST CASE "<<i+1<<endl;
		cout<<"Enter two number:"<<endl;
		cin>>a>>b;
		cout<<"Addition a + b = "<<a+b<<endl;
		cout<<"Subtraction a - b = "<<a-b<<endl;
		cout<<"Multiplication a * b = "<<a*b<<endl;
		cout<<"Division a / b = "<<(float)a/b<<endl;
	}	
	return 0; 
}
