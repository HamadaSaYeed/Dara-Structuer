# include <iostream>
using namespace std;
int main()
{

	int x[4] = { 5,7,9,2 };
	

	for (int i = 0; i < 4; i++)

	{

		cout << &x [i] << endl << endl;

	}

	for (int z = 0; z < 4; z++)

	{

		cout << x + z << endl<<endl;

		cout << *(x + z) << endl;


	}




	return 0;


}