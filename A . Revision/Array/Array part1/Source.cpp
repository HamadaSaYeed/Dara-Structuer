  #include <iostream>
 using namespace std;
int main()
{
	/*
	
	���� Array ����� �����  Array ����� ��� ���� �� 
	
	&arr = &arr[0]

	*/

	int arr[3] = { 1,2,3 };

	cout << arr; // 0000008F5E5CFA18

	cout << endl << &arr[0]; // 0000008F5E5CFA18



	return 0;

}