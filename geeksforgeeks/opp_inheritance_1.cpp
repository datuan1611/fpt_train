// c++ program to demonstrate implementation of Inheritance

#include<bits/stdc++.h>
using namespace std;

//Base class
class Parent {
	public:
		int id_p;
};

//Sub class inheriting from Base Class (Parent)
class Child : public Parent {
	public:
		int id_c;
};

//main function
int main() {

	Child obj1;

	obj1.id_p = 29;
	obj1.id_c = 1;
	cout<<"Parent: "<<obj1.id_p<<endl;
	cout<<"Child: "<<obj1.id_c<<endl;

	return 0;
}
