//Vector.h

class Vector {

private:
	double* elem;	//elem points to an array of sz doubles
	int sz;

public:
	Vector(int s) :elem{new double[s]}, sz{s} {	//constructor: acquire resources
		for(int i=0;i!=s;++i)	//initialize elements
			elem[i] = 0;
	}
	~Vector() {				//destructor: release resources
		delete[] elem;
	}
	double& operator[](int i);
	int size() const;

	Vector(std::initializer_list<double> lst)	//initialize with a list of doubles
		:elem{new double[lst.size()]}, sz{statis_cast<int>(lst.size())}
	{
		copy(lst.begin(),lst.end(),elem);		//copy from lst into elem
	}
	void push_back(double);				//add element at end, increasing the size by one
	//...
};
