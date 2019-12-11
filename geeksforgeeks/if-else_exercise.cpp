#include<iostream>
using namespace std;

int main() {
	unsigned int testCase;
	cout<<"Number of test case? "; cin>>testCase;
	for(auto i=0;i<testCase;++i) {
		cout<<"\nTEST CASE "<<i+1<<":\n";
		int num;
		cout<<"Enter a integer number: "; cin>>num;
		if(num>5)
			cout<<"--- Greater than 5\n";
		else if(num<5)
			cout<<"--- Smaller than 5\n";
		else
			cout<<"--- Equal to 5\n";
	}
	return 0;
}
