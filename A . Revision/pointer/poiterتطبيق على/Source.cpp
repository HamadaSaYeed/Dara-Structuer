# include <iostream>
using namespace std;

int main()
{
	int a = 10;

	int* z = &a;


	cout << a << endl;  // 10

	cout << z << endl;  //  0x7fffdfe140fc

	cout << *z << endl; //  10


	return 0;
}