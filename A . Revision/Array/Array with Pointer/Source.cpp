#include <iostream>
using namespace std;
int main()

{

	/*
	
 	����� ������� Array �� ����� ���  pointer  �� ������  Array 

	*/

	int arr[3] = { 1,2,3 };

	cout << "addres Arr : " << arr << endl; // 000000C54E7FF948




	/*
	
���� ����        	 ����� �����  Array(+1) �� ����� ���
	
	*/


	cout <<"arr + 1    : " << arr + 1 << endl;  // 000000730DF4F8FC
	cout <<"&arr[1]    : " << &arr[1] << endl; // 000000730DF4F8FC



	// (*arr)--> ����� ����
	cout << "*arr + 1   : " << *arr + 1 << endl; // 2

	return 0;

}