// https://www.youtube.com/watch?v=ykjtuSkt9g8&feature=youtu.be&t=11m53s
// lambdazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz


#include<iostream>
#include<vector>
using namespace std;

void modify(vector<int> &vec, auto fn)
{
	for(int i = 0; i < vec.size(); i +=1)
	{
		cout << fn(vec[i]) <<  " " ;
	}
	cout << endl;
}

int main()
{
	vector<int> vec = {1, 2, 45, 6, 5, 65};

	modify(vec, [](int val){

		return val > 3;
	});

	return 0;
}