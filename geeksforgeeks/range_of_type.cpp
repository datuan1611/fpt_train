//C++ program to demenstrate
//the program with "unsigned short"

#include<iostream>
using namespace std;

int main() {
	unsigned short a;
	for(a=65532;a<65536;a++)	//ERROR: short's valid range is 0 to +65535
		cout<<a<<"\n";
	return 0;
}
