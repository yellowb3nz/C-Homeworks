#include "square.hpp"

int main()
{
	sd::MyString str1("Hello");
	sd::MyString str2("Bye");
	sd::MyString str3 = str2;

	str2 = str1;

	str1.Print();
	str2.Print();
	str3.Print();

	return 0;
}