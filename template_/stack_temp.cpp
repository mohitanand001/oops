#include<iostream>
#include<vector>
using namespace std;

template<class T>
class Stk{
	private:
		vector<T> vec;

	public:
		Stk()
		{
			cout << "stack created " << endl;
		}

		bool isEmpty()
		{
			return vec.size() == 0;
		}

		void push(const T &val)
		{
			vec.push_back(val);
		}

		T top()
		{
			if(vec.size())
				return vec.back();
		}

		void pop()
		{
			if(vec.size())
				vec.pop_back();
		}

		void print_all()
		{
			for(int i = 0; i < vec.size(); i +=1)
			{
				cout << vec[i] << " " ;
			}
			cout << endl;
		}
};

int main()
{

	Stk<int> stk1; 

	stk1.push(12);
	stk1.push(213);stk1.push(293);
	stk1.print_all();

	Stk<string> stk2; 
	stk2.push("mo" );
	stk2.push("hi") ;
	stk2.push("ti");
	stk2.print_all();


	return 0;
}