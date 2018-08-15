#include<iostream>
using namespace std;

template <class T>
class vector{

private:
	int sz;
	T *head;
	int space;

public:
	vector(): sz(0), head(NULL), space(0) {}
	
	vector(int curr_size): sz(curr_size), head(new T[curr_size]), space(curr_size) {}

	vector& operator=(const vector &v);

	vector operator*(vector &x); 

	T operator[](int n){ return (this->head)[n];}

	const T operator[](int n) const { return (this->head)[n]; }

	int size(); 

	int capacity();

	void reserve(int allocate_size);

	void push_back(T element); 

	// unblocks/frees up memory blocked/acquired by this->head
	~vector(){ delete[] this->head; }
};

template <class T>
vector<T>& vector<T>::operator=(const vector &v)
{
	if((this->head) == (v.head))
		return (*this);

	if((this->space) >= v.sz)
	{
		for(int i = 0; i < v.sz; i +=1)
			(this->head)[i] = v[i];

		this->sz = v.sz;

		return (*this);
	}

	T *n_head = new T[v.sz];

	for(int i = 0; i < v.sz; i +=1)
		n_head[i] = v[i];

	delete [] (this->head);

	this->sz = v.sz;
	this->space = v.sz;
	this->head = n_head;

	return (*this);
}

template<class T>
vector<T> vector<T>::operator*(vector &x)
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

template<class T>
int vector<T>::size()
{
	return sz;
}

template<class T>
int vector<T>::capacity()
{
	return space;
}

template<class T>
void vector<T>::reserve(int allocate_size)
{
	if(allocate_size <= (this->space))
		return;


	T *n_head = new T[allocate_size];
	for(int i = 0; i < (this->sz); i +=1)
		n_head[i] = (this->head)[i];
	
	delete [] (this->head);
	this->head = n_head;
	this->space = allocate_size;
}



template <class T>
void vector<T>::push_back(T element)
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
	vector<int> vec;
	vec.push_back(12);
	vec.push_back(34);
	vec.push_back(3);
	vec.push_back(5);

	for(int i = 0; i < vec.size(); i +=1)
		cout << vec[i] << " ";

	cout << endl;

	vector<double> dec, lec;
	dec.push_back(2.3);
	dec.push_back(234.34);
	dec.push_back(4556.23);
	dec.push_back(34.554);

	for(int i = 0; i < dec.size(); i +=1)
		cout << dec[i] << " ";

	cout << endl;

	dec.push_back(2.3);	
	lec = dec;

	for(int i = 0; i < lec.size(); i +=1)
		cout << lec[i] << " " ;

	cout << endl;

	return 0;
}