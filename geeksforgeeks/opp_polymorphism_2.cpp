//C++ program for run-time polymorphism
//..function overriding

#include<iostream>
using namespace std;

class base {
	public:
		virtual void print() {
			cout<<"print base class"<<endl;
		}
		void show() {
			cout<<"show base class"<<endl;
		}
};

class derived : public base {
	public:
		void print() {
			cout<<"print derived class"<<endl;
		}
		void show() {
			cout<<"show derived class"<<endl;
		}
		void view() {
			cout<<"view derived class"<<endl;
		}
};

//main function
int main() {
	base *bptr;
	derived d;
	bptr = &d;
	
	//virtual function, runtime polymorphism
	bptr->print();

	//non-virtual function, compile time polymorphism
	bptr->show();

	//bptr->view();	//ERROR: "class base" has no member "view()"

	return 0;
}
