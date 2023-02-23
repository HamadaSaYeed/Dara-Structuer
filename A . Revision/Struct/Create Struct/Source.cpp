# include <iostream>
using namespace std;

struct student
{
	int id;
	int gread;
	string name;

	void print()
	{
		cout << "name is : " << name << endl;
		cout << "id is : " << id << endl;
		cout << "gread is : " << gread << endl;

	}
};
int main()
{

	student op;

	op.gread = 90;
	op.id = 621224;
	op.name = "hamada";
	op.print();




	return 0;

}