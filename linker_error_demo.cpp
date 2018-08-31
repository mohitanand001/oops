#include<iostream>

void func();

int m_func()
{
	func();
}


// during the compilation process of the code, it is tested whether func and m_func are
// `declared`, but it only during linking that references to func() and m_func() gets
// resolved. If the compiler does not find func() `declaration` it will throw a compilation error
// 'func’ was not declared in this scope
// you can test the above by commenting the void func(); and trying to compile
// but if func() is declared, but not defined linker error occurs.
// linker_error_demo.cpp:(.text+0x5): undefined reference to `func()'

int main()
{

	m_func();
	return 0;
}