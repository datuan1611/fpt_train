#include<iostream>
using namespace std;

int main() {
	if(0) {
		label_1: cout<<"Hello ";
		goto label_2;
	}
	else {
		label_2: cout<<"Geeks!\n";
		goto label_1;
	}
	return 0;
}
