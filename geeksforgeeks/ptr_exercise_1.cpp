#include<iostream>
using namespace std;

void updateVar(int *a) {
	*a += 10;
}

int main() {
	int t[] {2, 5, 9, 7};
	for(auto x:t) {
		updateVar(&x);
		cout<<x<<endl;
	}
	return 0;
}
