#include<iostream>
using namespace std;

int main() {
	unsigned int testCase;
	cout<<"Number of test case? "; cin>>testCase;
	for(int i=0;i<testCase;++i) {
		cout<<"\nTEST CASE "<<i+1<<"\n";
		int num;
		cout<<"Enter your number? "; cin>>num;
		switch(num) {
			case 1:
				cout<<"one\n";
				break;
			case 2:
				cout<<"two\n";
				break;
			case 3:
				cout<<"three\n";
				break;
			case 4:
				cout<<"four\n";
				break;
			case 5:
				cout<<"five\n";
				break;
			case 6:
				cout<<"six\n";
				break;
			case 7:
				cout<<"seven\n";
				break;
			case 8:
				cout<<"eight\n";
				break;
			case 9:
				cout<<"nine\n";
				break;
			case 10:
				cout<<"ten\n";
				break;
			default:
				cout<<"Out of range [1, 10]\n";
				break;
		}
	}	
}
