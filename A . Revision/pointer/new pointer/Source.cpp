/*
        æÇÎĞä İíå İíãå pointer áæ ÚÇæÒ ÇÚãá
*/


#include <iostream>

using namespace std;

int main()
{
    string* ptr =  new string;

    *ptr = "hamada";

    cout << *ptr; // hamada

    return 0;
}