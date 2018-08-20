#include<iostream>
using namespace std;

class Complex{

	private:
		int a, b;
		int *ptr;

	public:
		void get_data()
		{
			cout<<a<<" "<<b<<endl;
		}

		void set_data(int a, int b)
		{
			this->a = a;
			this->b = b;
		}

		Complex()
		{
			a = 5;
			b = 10;
			ptr = new int;
			*ptr = 45;
		}

		~Complex()
		{
			free(ptr);
			cout<<"memory freed"<<endl;
		}
};
	

int main()
{	

	{
		Complex obj;
	}

	return 0;
}