#include<iostream>
using namespace std;

int &fun() {
	int x= 10;
	return x;
}

int main() {
	int a = 30;
	fun() = a;
	cout<<fun()<<endl;
	return 0;
}
