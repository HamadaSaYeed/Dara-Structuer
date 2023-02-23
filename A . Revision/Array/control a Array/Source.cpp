#include <iostream>
using namespace std;
int main()
{
	/*
	
	 ÇÏíåÇ Şíã Úä ØÑíŞ ÇáãÓÊÎÏã Array 
	
	*/

	const int size = 5; // áÇÒã ÊÈŞÇ ËÇÈÊå áÇä áæ ãÔ ËÇÈÊå ÇŞÏÑ ÇÛíÑ ÇáŞíãå
	
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
		
		
		sum += arr[j]; // ÚÔÇä ÇÌãÚ ÚäÇÕÑ ÇáãÕİæİå
	
	}
	

	cout << " } ";

	cout << endl << endl;

	cout << "sum Arrays =" << sum;



	cout << endl << endl;



	return 0;

}