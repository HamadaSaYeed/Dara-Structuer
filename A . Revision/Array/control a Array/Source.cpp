#include <iostream>
using namespace std;
int main()
{
	/*
	
	 ����� ��� �� ���� �������� Array 
	
	*/

	const int size = 5; // ���� ���� ����� ��� �� �� ����� ���� ���� ������
	
	int arr[size];


	int sum = 0;


	for (int i = 0; i < size; i++)
	{
		cout << "enter a lemts : ";
		cin >> arr[i] ;
	}

	cout << " { ";
	
	for (int j = 0; j < size; j++)
	{
		
		cout <<  arr[j] << "," ;
		
		
		sum += arr[j]; // ���� ���� ����� ��������
	
	}
	

	cout << " } ";

	cout << endl << endl;

	cout << "sum Arrays =" << sum;



	cout << endl << endl;



	return 0;

}