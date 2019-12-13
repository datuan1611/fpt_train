//C++ program to explain multiple inheritance

#include<iostream>
using namespace std;

//first class
class Vehicle {
	public:
		Vehicle() {
			cout<<"This is a Vehicle"<<endl;		
		}
		void run() {
			cout<<"Vehicle is running"<<endl;
		}
};

//second class
class FourWheeler {
	public:
		FourWheeler() {
			cout<<"This is a FourWheeler"<<endl;		
		}
		void run() {
			cout<<"FourWheeler is running"<<endl;
		}
};

//sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {

};

//main function
int main() {
	Car obj;
	obj.Vehicle::run();
	obj.FourWheeler::run();
	return 0;
}
