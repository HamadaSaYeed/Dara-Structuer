#include <iostream>
using namespace std;

/*

	union ---- >>  ÈíÎĞä ÇÎÑ Şíãå ÈíÏÎáåÇ

*/

union box
{

	double weight;
	double height;


};

int main()
{

	box opj;

	opj.weight = 100;

	opj.height = 55;

	cout << opj.weight << endl; // 55

	cout << opj.height << endl; // 55 
	

	return 0;

}