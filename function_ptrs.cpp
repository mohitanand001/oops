// https://www.youtube.com/watch?v=p4sDgQ-jao4

#include<iostream>
#include<vector> 

using namespace std;

int func(int x)
{
	return x * 10;
}

int another_func(int x)
{
	return x + 100;
}

void modifier(auto &f, vector<int> &vec)
{
	for(int i = 0; i < vec.size(); i +=1)
	{
		cout << f(vec[i]) << " " ;
	}
	cout << endl;
}




int main()
{

	// function pointer variable `fun`
	auto fun = func;

	fun(3);
	fun(45);

	vector<int> vec = {1, 2, 3, 4, 5};

	modifier(func, vec);
	modifier(another_func, vec);

	return 0;
}