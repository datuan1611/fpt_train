//C program to demonstrate use of * for pointers in C
#include<stdio.h>

int main() {
	//A normal integer variable
	int var = 10;
	
	//A pointer variable that holds address of var
	int *ptr = &var;

	printf("Value of var = %d\n",*ptr);
	printf("Address of var = %p\n",ptr);

	*ptr = 20;	//Value at address is now 20
	printf("After doing *ptr=20, *ptr is  %d\n",*ptr);

	return 0;
}
