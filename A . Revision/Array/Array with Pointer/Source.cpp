#include <iostream>
using namespace std;
int main()

{

	/*
	
 	åíØÈÚ ÚäæÇäåÇ Array áæ ØÈÚäÇ ÇÓã  pointer  İì ÇáÇÓÇÓ  Array 

	*/

	int arr[3] = { 1,2,3 };

	cout << "addres Arr : " << arr << endl; // 000000C54E7FF948




	/*
	
ËÇäì ÚäÕÑ        	 åíØÈÚ ÚäæÇä  Array(+1) áæ ØÈÚäÇ ÇÓã
	
	*/


	cout <<"arr + 1    : " << arr + 1 << endl;  // 000000730DF4F8FC
	cout <<"&arr[1]    : " << &arr[1] << endl; // 000000730DF4F8FC



	// (*arr)--> åíØÈÚ Şíãå
	cout << "*arr + 1   : " << *arr + 1 << endl; // 2

	return 0;

}