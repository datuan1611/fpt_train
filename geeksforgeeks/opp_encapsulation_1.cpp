//C++ program for Encapsulation

#include<iostream>
using namespace std;

class Encapsulation {
	private:
		//data hidden from outside world
		int x;
	public:
		//function to set value of variable x
		void set(int a) {
			this->x = a;
		}
		//function to return value of variable x
		int get() {
			return this->x;
		}
};

int main() {
	Encapsulation obj;
	obj.set(5);
	cout<<obj.get()<<endl;
	return 0;
}
