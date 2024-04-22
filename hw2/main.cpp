#include <iostream>
#include <cmath>

// ������� �����, ����������� �������. ���������� � ������ �������, �������� � ����� ��������� ������.

class Square
{
private:
	// �������� �� ������������� �������� ����� �������
	bool isPositive()
	{
		if (side > 0)
		{
			return true;
		}
	}

	void Area()
	{
		std::cout << "�������: " << side * side << std::endl;
	}

	void Perimeter()
	{
		std::cout << "��������: " << 4 * side << std::endl;
	}

	void Diagonal()
	{
		std::cout << "���������: " << sqrt(2) * side << std::endl;
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
			std::cout << "������: ������������� �����.";
			return 0;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	float n;
	std::cout << "������� ����� ������� ��������: ";
	std::cin >> n;
	std::cout << std::endl;

	Square exampleSquare;
	exampleSquare.side = n;
	exampleSquare.Calculations();

	return 0;
}