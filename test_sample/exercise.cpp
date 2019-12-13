#include<iostream>
using namespace std;

int a = 1;

class MyClass {
	private:
	
	int a;
	public:
	MyClass(int x) {
		this->a = x;
	}
	int set() {
		this->a = ::a;	
	}
	void print() {
		cout<<this->a<<endl;
	}
};


int main() {
	MyClass obj(2);
	obj.print();
	
	obj.set();
	obj.print();
	
	if(obj.set()==1) {
		int i = 5;
		int j = 0;
			if(j==0) {
				int i = 6;
				cout<<i<<endl;
				//cout<<if()::i<<endl; //cannot accsess 'i' outside by scope resolution (::) operator
			}
	}
	
	return 0;
}
