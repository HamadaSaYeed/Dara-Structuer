#include <iostream>
using namespace std;
int main()
{

	int* ptr = new int; 
	*ptr = 55;

	cout << *ptr; // 55

	return 0;
}