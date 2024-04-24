#include "square.hpp"
#include <iostream>

namespace sd
{
	MyString::MyString()
	{
		str = nullptr;
	}

	// ����������� ��������� ������
	MyString::MyString(const char* str)
	{
		int lenght = strlen(str);
		this->str = new char[lenght + 1];

		for (int i = 0; i < lenght; i++)
		{
			this->str[i] = str[i];
		}

		this->str[lenght] = '\0';
	}

	// ����������� �����������
	MyString::MyString(const MyString& other)
	{
		int lenght = strlen(other.str);
		this->str = new char[lenght + 1];

		for (int i = 0; i < lenght; i++)
		{
			this->str[i] = other.str[i];
		}

		this->str[lenght] = '\0';
	}

	// �������� ������������
	MyString& MyString::operator=(const MyString& other)
	{
		if (this->str != nullptr)
		{
			delete[] str;
		}

		int lenght = strlen(other.str);
		this->str = new char[lenght + 1];

		for (int i = 0; i < lenght; i++)
		{
			this->str[i] = other.str[i];
		}

		this->str[lenght] = '\0';

		return *this;
	}

	// ������� ������������ ������
	MyString::~MyString()
	{
		delete[] this->str;
	}
	
	// �����
	void MyString::Print()
	{
		std::cout << str << std::endl;
	}
}