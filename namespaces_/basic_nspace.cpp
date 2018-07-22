// why 'using namespace std' should not be used?
// https://www.youtube.com/watch?v=4NYC-VU-svE&index=60&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
// https://www.youtube.com/watch?v=ts1Eek5w7ZA&index=61&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb

#include<iostream>

int main()
{

	// explicitly stating std::cout mentions 
	// that we are using cout from std library and 
	// not form somewhere else
	// If another library also had some implementation 
	// named as cout, and it was also included in this
	// file, as "using namespace another_file", this would 
	// be ambiguous, and probably wont compile.
	std::cout << "hello" << std::endl;


	return 0;
}