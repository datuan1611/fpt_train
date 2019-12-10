//C++ program to illustrate Pointer Arithmetic in C/C++

#include<iostream>
using namespace std;

int main() {
	//declare an array
	int v[3] = {10, 100, 200};

	//declare pointer variable
	int *ptr;
	
	//assign address of v[0] to ptr
	ptr = v;	//ptr = &v[0];

	for(int i=0;i<3;i++) {
		printf("value of *ptr = %d\n",*ptr);
		printf("value of ptr = %p\n\n",ptr);
		//increase ptr by 1
		ptr++;		
	}
}
