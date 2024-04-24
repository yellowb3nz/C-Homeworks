#pragma once

namespace sd
{
	class MyString
	{
	private:
		char* str;

	public:
		MyString();

		// Конструктор ненулевой строки
		MyString(const char* str);

		// Конструктор копирования
		MyString(const MyString& other);

		// Оператор присваивания
		MyString& operator=(const MyString& other);
		
		// Вывод
		void Print();

		// Очистка динамической памяти
		~MyString();
	};
}
