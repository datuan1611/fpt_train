#include<Vector.h>

class Container {
public:
	virtual double& operator[](int) = 0;	//pure virtual function
	virtual int size() const = 0;			//const member function
	virtual ~Container() {}				//destructor
};

void use(Container& c) {
	const int sz = c.size();
	
	for(int i =0;i!=sz;++i)
		cout<<c[i]<<"\n";
}

class Vector_container : public Container {	//Vector_container implements Container
	Vector v;
public:
	Vector_container(int s) : v(s) {}		//vector of s elements
	~Vector_container() {}

	double& operator[](int i) {return v[i];}
	int size() const {return v.size();}
};

void g() {
	Vector_container vc {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	use(vc);		//call Vector_container::operator[]()
}

class List_container : public Container {	//List_container implements Container
	std::list<double> ld;	//(standard-library) list of doubles
public:
	List_container() {}		//empty List
	List_container(initialize_list<double> il) : ld{il} {}
	~List_container() {}

	double& operator[](int i) {
		for(auto& x : ld) {
			if(i==0) return x;
			--i;		
		}
		throw out_of_range("List container");
	}
	int size() const {return ld.size();}
}

void h() {
	List_container lc {1, 2, 3, 4, 5, 6, 7, 8, 9};
	use(lc);		//call List_container::operator[]()
}
