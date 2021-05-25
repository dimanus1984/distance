#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

class Point
{
	//string m_length;
	int m_x;
	int m_y;

public:
	//Метод вывода, который возвращает расстояние до указанной точки
	void distance(int first, int second)
	{
		m_x = first;
		m_y = second;
	}

	void print()
	{
		cout << "До Академии остальсь пройти: " << m_y - m_x << " км." << endl;
	}

	//Скопировал элементы из одного объекта класса в другой объект того же класса.
	void copyFrom(const Point& b)
	{
		m_x = b.m_x;
		m_y = b.m_y;
	}
};

void main()
{
	setlocale(LC_ALL, "");
	Point km;
	km.distance(2, 5); //distance() имеет спецификатор доступа public.
	km.print();

	Point copy;
	copy.copyFrom(km); //copyFrom() имеет спецификатор доступа public.
	copy.print();
}