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
	//����� ������, ������� ���������� ���������� �� ��������� �����
	void distance(int first, int second)
	{
		m_x = first;
		m_y = second;
	}

	void print()
	{
		cout << "�� �������� �������� ������: " << m_y - m_x << " ��." << endl;
	}

	//���������� �������� �� ������ ������� ������ � ������ ������ ���� �� ������.
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
	km.distance(2, 5); //distance() ����� ������������ ������� public.
	km.print();

	Point copy;
	copy.copyFrom(km); //copyFrom() ����� ������������ ������� public.
	copy.print();
}