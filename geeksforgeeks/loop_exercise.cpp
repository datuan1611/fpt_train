#include<iostream>
using namespace std;

int main() {
	unsigned int testCase;
	cout<<"Number of test case? ";cin>>testCase;
	for(auto i=0;i<testCase;++i) {
		cout<<"TEST CASE "<<i+1<<endl;
		int numLoop;
		cout<<"Number of loop? ";cin>>numLoop;
		for(auto j=0;j<numLoop;++j)
			cout<<"GeeksforGeeks"<<endl;
	}
	return 0;
}
