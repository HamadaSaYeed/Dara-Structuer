// intersection
#include <iostream>
using namespace std;

void intersection(int a[] , int b[])
{
    for(int i = 0 ; i < 7 ; i++)
    {
        for(int J = 0 ; J < 7 ; J++)
        {
            if(a[i] == b[J])
            {
                cout << a[i] << " ";
                
            }
        }
    }
}


// Union
void Union(int a[] , int b[])
{
    for(int i = 0 ; i < 7 ; i++)
    {
        cout << a[i] << " ";
    }
    
    int flag = 0;
    for(int i = 0 ; i < 7 ; i++)
    {
        for(int J = 0 ; J < 7 ; J++)
        {
            if(a[i] == b[J])
            {
                flag = 1;
            }
        }
        
        if(flag == 0)
        {
            cout << b[i] << " " ;
        }
    }
}

int main()
{
    int arr1[] = {2,4,5,6,8,9};
    int arr2[] = {1,3,5,7,9};
    
    intersection(arr1 , arr2);
    cout << endl;
    Union(arr1 , arr2);
    
    
    return 0;
}