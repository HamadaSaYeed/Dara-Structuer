#include <iostream>

using namespace std;

int main() {



	int a [3]={20,10,5};

	cout << &a[0] << endl;
	cout << &a[1] << endl;
	cout << &a[2] << endl << endl;


	cout << a << endl;
	cout << a+1 << endl;
	cout << a+2 << endl << endl;


	cout << *a << endl;
	cout << *(a+1) << endl;
	cout << *(a+2) << endl << endl;




	return 0;
}