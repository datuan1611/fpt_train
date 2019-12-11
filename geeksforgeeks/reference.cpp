#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int& first, int& second) {
	int temp = first;
	first = second;
	second = temp;
}

//avoid copy of large structure
struct Student {
	string name;
	string address;
	int rollNo;
};
void printStudent(Student& s) {
	cout<<s.name<<"\n"<<s.address<<"\n"<<s.rollNo<<"\n\n";
}

int main() {
	int x = 10;

	//ref is a reference to x
	int& ref = x;
	
	//value of x is now changed to 20
	ref = 20;
	cout<<"x = "<<x<<endl;

	//value of x is now changed to 30
	x = 30;
	cout<<"ref = "<<ref<<endl;

	//modified the passed parameters in a function
	int a=2, b=3;
	swap(a,b);
	cout<<a<<"\t"<<b<<endl;

	//in for each loops to modify all objects
	vector<int> vect1 {10,20,30,40};
	//we can modify elements if we use use reference
	for(int &x:vect1)
		x = x + 5;
	//print elements
	for(int x:vect1)
		cout<<x<<" ";
	cout<<endl;

	//in for each loops to avoid copy of objects
	vector<string> vect2 {"geeksforgeeks practice",
					"geeksforgeeks write",
					"geeksforgeeks ide",};
	for (const auto &x:vect2)
		cout<<x<<endl;

	return 0;
}
