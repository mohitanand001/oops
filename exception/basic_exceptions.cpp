// https://www.youtube.com/watch?v=asekOytwNw4
// https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
// https://www.quora.com/What-is-the-difference-between-a-try-catch-statement-and-an-if-else-statement

// The difference between try catch and if-else
// is that in if else, mutually exclusive code, runs
// but it is not the case in try catch


// Exception handling in c++
// Exception is any abnormal or unexpected behaviour
// user enters -1 in case of factorial printing
// Only one catch block is executed


#include<iostream>
#include<string>
#include<vector>

int main()
{

	int i ;
	i = 3;

	// simple example of try catch
	try{
		if(i == 1)
			throw 10;
		else if(i == 2)
			throw 20.12;
		else if(i == 3)
			throw std::string("as");
	}

	catch(int e){

		std::cout << "integer throw" << std::endl;
	}
	catch(double e){
		std::cout << "double throw" << std::endl;
	}
	catch(std::string e){
		std::cout << "string throw" << std::endl; 
	}






	std::vector<int> vec;

	// Only one catch block will be executed, since out_of_range is already thrown for
	// the vector the string Exception is not taken into account

	try{
		vec.at(0) = 1;
		std::string x (1000000000000000000000, 'a');
	}

	catch (std::out_of_range){
		std:: cout << "out of range" << std::endl;
	}	
	catch(std::bad_alloc){
		std:: cout << "bad_alloc " << std::endl;
	}



	// to see bad_alloc, which happens when new fails to allocate memory on heap

	try{
		std::string r (1000000000000000000000, 'a');
	}
	catch(std::bad_alloc){
		std::cout << "bad_alloc" << std::endl;
	}



	std::cout << "hello" << std::endl ;

	return 0;
}