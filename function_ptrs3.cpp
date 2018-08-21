// https://www.youtube.com/watch?v=sxTFSDAZM8s
// function callbacks in c++
// this gives an insignt into how comparator
// functions are implemented in c++


#include<iostream>
#include<vector>
using namespace std;

bool cmp(int x, int y)
{
	return x > y;
}

bool dec_cmp(int x, int y)
{
	return x < y;
}

bool abs_cmp(int x, int y)
{
	return abs(x) > abs(y);
}

void bubble_srt(vector<int> &vec, bool (*cmpr)(int x, int y))
{
	int tmp;
	for(int i = 0; i < vec.size(); i +=1)
	{
		for(int j = 0; j < vec.size() - 1; j +=1)
		{
			if(cmpr(vec[j], vec[j + 1]))
			{
				tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;
			}
		}
	}
}

void print_vec(vector<int> &vec)
{
	for(int i = 0; i < vec.size(); i +=1)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

int main()
{

	vector<int> vec = {-34, 65, -1,2,4 ,324, -456,4, 56};

	// sort in increasing order
	bubble_srt(vec, cmp);
	print_vec(vec);

	// sort in decreasing order
	bubble_srt(vec, dec_cmp);
	print_vec(vec);

	// sort by absolute value
	bubble_srt(vec, abs_cmp);
	print_vec(vec);


	return 0;
}