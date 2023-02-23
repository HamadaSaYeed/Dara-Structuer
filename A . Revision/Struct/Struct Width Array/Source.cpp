# include <iostream>
using namespace std;

struct student
{
	int id;
	int gread;
	string name;
};

int main()
{
	/*
	
         	Array  ÇÚãá ÇæÈÌíßÊ 
	
	*/

	student arr[5];

	for (int i = 0; i < 3; i++)
	{
		cout << "enter yout name : " << endl;
		cin >> arr[i].name;

		cout << "enter yout id : " << endl;
		cin >> arr[i].id;

		cout << "enter yout gread : " << endl;
		cin >> arr[i].gread;
		
	}

	for (int i = 0; i < 3; i++)
	{

		cout << " yout name is : " << arr[i].name << " and " << " yout id is : " << arr[i].id << " yout gread is : " << arr[i].gread << endl;
		
	}

	



	return 0;

}