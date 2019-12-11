#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int *ptr = &a;
	int &ref = *ptr;
	cout<<ref<<endl;
	return 0;
}
