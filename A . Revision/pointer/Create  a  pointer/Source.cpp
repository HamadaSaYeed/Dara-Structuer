#include <iostream>
using namespace std;
int main()
{
	/*
	
	������ ���� ��� ��� ����� 
	
	*p -- > ���� ������� ��� ����

	*/


	int a = 50;

	int* p = &a;

	cout << p << "      " << *p << "      " << &a << endl;


	return 0;

}