#pragma once

namespace sd
{
	class MyString
	{
	private:
		char* str;

	public:
		MyString();

		// ����������� ��������� ������
		MyString(const char* str);

		// ����������� �����������
		MyString(const MyString& other);

		// �������� ������������
		MyString& operator=(const MyString& other);
		
		// �����
		void Print();

		// ������� ������������ ������
		~MyString();
	};
}