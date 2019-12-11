#include<iostream>
using namespace std;

void swap(char * &ptr1, char * &ptr2) {
	char *temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	char *str1 = "GEEKS";
	char *str2 = "FOR GEEKS";
	cout<<"str1 is "<<str1<<endl;
	cout<<"str2 is "<<str2<<endl;
	swap(str1,str2);
	cout<<"str1 is "<<str1<<endl;
	cout<<"str2 is "<<str2<<endl;
	
	char a = 'A', b = 'B';
	char *pa = &a;
	char *pb = &b;
	cout<<"\n"<<a<<": "<<pa<<"\t"<<b<<": "<<pb<<"\n";
	swap(pa,pb);
	cout<<"\n"<<a<<": "<<pa<<"\t"<<b<<": "<<pb<<"\n";

	int x = 2, y = 3;
	cout<<x<<": "<<&x<<"\t"<<y<<": "<<&y<<"\n";
	swap(x,y);
	cout<<x<<": "<<&x<<"\t"<<y<<": "<<&y<<"\n";
	return 0;	
}
