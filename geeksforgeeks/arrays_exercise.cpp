#include<iostream>
using namespace std;

int main() {
	unsigned int testCase;
	cout<<"Number of test case? "; cin>>testCase;
	for(int i=0;i<testCase;++i) {
		cout<<"TEST CASE "<<i+1<<":\n";
		int n;
		cout<<"Enter number of elements: "; cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;++i) {
			//cout<<"\na["<<i<<"]: ";
			cin>>a[i];
			sum += a[i];
		}
		cout<<"--> SUM = "<<sum<<"\n";
	}
	return 0;
}
