#include <iostream>
#include <cmath>

// Создать класс, описывающий квадрат. Рассчитать площадь, периметр и длину диагонали фигуры.

class Square
{
private:
	// Проверка на положительное значение длины стороны фигуры
	bool isPositive()
	{
		if (side > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Area()
	{
		std::cout << "Площадь: " << side * side << std::endl;
	}

	void Perimeter()
	{
		std::cout << "Периметр: " << 4 * side << std::endl;
	}

	void Diagonal()
	{
		std::cout << "Диагональ: " << sqrt(2) * side << std::endl;
	}

public:
	int side;

	int Calculations()
	{
		if (isPositive())
		{
			Area();
			Perimeter();
			Diagonal();
		}
		else
		{
			std::cout << "Ошибка: Отрицательное значение длины." << std::endl;
			return 0;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	float n;
	std::cout << "Введите длину стороны квадрата: ";
	std::cin >> n;
	std::cout << std::endl;

	Square exampleSquare;
	exampleSquare.side = n;
	exampleSquare.Calculations();

	return 0;
}
