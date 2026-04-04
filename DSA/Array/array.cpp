#include<iostream>
using namespace std;

int main()
{

    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,3,4,1};
    int size1=6;
    int size2=4;
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout << arr1[i] << " \n"; 
            }
        }

    }
    return 0;
}