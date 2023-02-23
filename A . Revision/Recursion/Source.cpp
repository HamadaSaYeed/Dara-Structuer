# include <iostream>

using namespace std;

int Rec(int number)

{

	if (number == 1)
	{

		return 1;

	}

	else 
	{
		
		return 5 + Rec(number - 1);

	}




}
// Rec (8)  = 36 ##	
// 5+Rec(7) = 36
// 5+Rec(6) = 31
// 5+Rec(5) = 26
// 5+Rec(4) = 21
// 5+Rec(3) = 16
// 5+Rec(2) = 11
// 5+Rec(1) = 6
//1
int main()
{


	cout<<Rec(8);


}


//   Íá ÇÎÑÑ   ÈÓ ÇáÍá Ïå ÈíÌãÚ Çí ÑÞãíä æÑÇ ÈÚÖ

// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36

/*

#include <iostream>

using namespace std;


int main()
{
    int num;
    cin >> num;  // 8

    int sum = 0;

    for(int i = 1 ; i <= num ; i++)
    {
            sum += i;
    }
    cout << sum;  // 36

    return 0;
}



*/