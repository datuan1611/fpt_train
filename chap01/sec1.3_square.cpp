#include<iostream>
using namespace std;

double square(double x){
	return x*x;
}

void print_square(double x){
	cout<<"Square of "<<x<<" is: "<<square(x)<<"\n";
}

int main(){
	print_square(1.234);	//print: Square of 1.234 is 1.52276
}
