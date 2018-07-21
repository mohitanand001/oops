#include<iostream>
#include<vector>

void push_ref(std::vector<int> &ref)
{
	for(int i = 0; i < 10; i +=1)
	{
		ref.push_back(i);
	}
}


void push_ptr(std::vector<int> *ptr)
{

	for(int i = 10; i < 20; i +=1)
	{
		(*ptr).push_back(i);
	}

}

int main()
{

	std::vector<int> vec;

	push_ref(vec);
	push_ptr(&vec); 

	for(int i = 0; i < vec.size(); i +=1)
	{
		std::cout<<vec[i]<<" ";
	}

	std::cout<< std::endl;

	return 0;
}