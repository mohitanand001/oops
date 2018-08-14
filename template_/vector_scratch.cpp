#include<iostream>
using namespace std;

class vector{

private:
	int sz;
	double *head;
	int space;

public:
	vector(): sz(0), head(NULL), space(0) {}
	
	vector(int curr_size): sz(curr_size), head(new double[curr_size]), space(curr_size) {}

	void operator=(vector &v);

	vector operator*(vector &x); 

	double operator[](int n){ return (this->head)[n];}

	int size(); 

	int capacity();

	void reserve(int allocate_size);

	void push_back(double element); 

	// unblocks/frees up memory blocked/acquired by this->head
	~vector(){ delete[] this->head; }
};

void vector::operator=(vector &v)
{
	if((this->head) == (v.head))
		return ;

	if((this->space) >= v.sz)
	{
		for(int i = 0; i < v.sz; i +=1)
			(this->head)[i] = v[i];

		this->sz = v.sz;

		return ;
	}

	double *n_head = new double[v.sz];

	for(int i = 0; i < v.sz; i +=1)
		n_head[i] = v[i];

	delete [] (this->head);

	this->sz = v.sz;
	this->space = v.sz;
	this->head = n_head;

	return ;
}

vector vector::operator*(vector &x)
{
	// if(x.size() != (this->size()))
	// 	return ;
	vector temp ;
	for(int i = 0; i < x.size(); i +=1)
	{
		temp.push_back((this->head)[i] * (x[i]));
	}

	return temp;
}


int vector::size()
{
	return sz;
}

int vector::capacity()
{
	return space;
}

void vector::reserve(int allocate_size)
{
	if(allocate_size <= (this->space))
		return;


	double *n_head = new double[allocate_size];
	for(int i = 0; i < (this->sz); i +=1)
		n_head[i] = (this->head)[i];
	
	delete [] (this->head);
	this->head = n_head;
	this->space = allocate_size;
}


void vector::push_back(double element)
{
	if(sz == 0)
		reserve(10);
	else if(sz == space)
		reserve(2*sz);

	head[sz] = element;
	sz +=1;

}

int main()
{
	
	vector vec, dec;
	vec.push_back(12);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(4.2);

	for(int i = 0; i < vec.size(); i +=1)
		cout << vec[i] << " " ;

	dec = vec;
	cout << endl;

	for(int i = 0; i < dec.size(); i +=1)
		cout << dec[i] << " ";

	cout<< endl;

	{dec;}
	dec.push_back(12);
	dec.push_back(2);
	dec.push_back(34);
	dec.push_back(1);

	// vector mul;
	// mul = dec*vec;

	// for(int i = 0; i < mul.size(); i +=1)
	// 	cout << mul[i] << " ";

	cout<< endl;

	return 0;
}