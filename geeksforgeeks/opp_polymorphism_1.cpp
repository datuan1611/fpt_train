//C++ program for compile time polymorphism:
//..function overloading
//..operator overloading

#include<iostream>
using namespace std;

class Geeks {
	public:
		void func(int x) {
			cout<<"integer: x = "<<x<<endl;
		}
		void func(double x) {
			cout<<"double: x = "<<x<<endl;
		}
		void func(int x, int y) {
			cout<<"two integer:\n\tx = "<<x<<"\n\ty = "<<y<<endl;
		}		
};

class Complex {
	private:
		int real, imag;
	public:
		Complex(int r=0, int i=0) {real=r; imag=i;}
		//operator 'x' between 2 complex obj
		Complex operator+ (Complex const &obj) {
			Complex res;
			res.real = real + obj.real;
			res.imag = imag + obj.imag;
			return res;
		}
		void print() {cout<<real<<" + i"<<imag<<endl;}
};

int main() {
	//function overloading
	Geeks obj;
	obj.func(7);
	obj.func(3.14);
	obj.func(85,64);
	//operator overloading
	Complex c1(10,5), c2(2,4);
	Complex c3 = c1 + c2;
	c3.print();
	
	return 0;
}
