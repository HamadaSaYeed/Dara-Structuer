# include <iostream>

using namespace std;

int main()

{

	float x = 2.5;
	
	cout << &x << endl; // 0x7ffd7c08413c

	float* p = &x;

	cout << p << endl;  // 0x7ffd7c08413c

	cout << *p << endl; // 2.5


	return 0;

}