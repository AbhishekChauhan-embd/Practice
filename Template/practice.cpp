/*Templates in C++ allow you to write generic and reusable code. Instead of writing multiple functions or classes for different 
data types, you can write a single template that works with any type.
There are two main types of templates:
    1. Function Templates
    2. Class Templates*/


#include<iostream>
using namespace std;

/********************************************************************/
/* 1. Write a function template to swap two values.                 */
/*    Extend it for different types (int, float, char, std::string).*/
/********************************************************************/

template <typename T>
void swapValues(T *val1, T *val2)
{
    T temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
/*********************End of Function********************/

/**************************************************************************************/
/* 2. Create a class template Calculator that can perform basic arithmetic operations.*/
/*    Support add, subtract, multiply, and devisoinide.                               */
/**************************************************************************************/
enum{sum,sub,mul,devisoin};

template <typename T>
class calculator{
    T value1;
    T value2;
    T result;
    public:
    T setData(T v1, T v2, int op){
        value1=v1;
        value2=v2;

        //cout << value1 << endl<< value2<<endl;

        switch(op){
            case 0:
                result = sum();
                break;
            case 1:
                result = sub();
                break;
            case 2:
                result = mul();
                break;
            case 3:
                result = devisoin();
                break;
            default:
                cout << "wrong input!\n";
        }
        return result;
    }

    T sum()
    {
        //cout << "sum called\n";
        return value1 + value2;
    }

    T sub()
    {
       // cout << "sub called\n";
        return value1-value2;
    }
    
    T mul()
    {
        //cout << "mul called\n";
        return value1*value2;
    }

    T devisoin()
    {
       // cout << "div called\n";
        return value1/value2;
    }

};
/*********************End of Function********************/

/************************************************************************/
/* 3. Implement a function template to find the maximum of three values.*/
/************************************************************************/
template <typename T>
T maxOfthree(T a, T b, T c)
{
    return max(a,max(b,c));
}
/*********************End of Function********************/


/******************************************************************/
/* 4. Write a template function to sort an array of any data type.*/
/******************************************************************/
template <typename T>
void shortArray(T *ptr, int size)
{
    T temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp        = *(ptr+i);
                *(ptr+i)    = *(ptr+j);
                *(ptr+j)    = temp;
            }
        }
    }
}
/*********************End of Function********************/

/**************************************/
/*Function to print the array elements*/
/**************************************/
template <typename T>
void printArray(T *ptr, int size)
{
    for(int i =0;i<size;i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}


/**********************************************************************************/
/*Write a function template that accepts two different types and returns their sum 
(use auto or template parameter deduction).*/
/**********************************************************************************/

template <typename t1, typename t2>
auto sumNum(t1 a,t2 b){
    return a+b;
}


int main()
{
    // int a = 10;
    // int b = 12;

    // string a = "Abhishek";
    // string b = "Chauhan";

    // cout << "a : " << a << endl;
    // cout << "b : " << b << endl;
    // swapValues(&a, &b);;
    // cout << "a : " << a << endl;
    // cout << "b : " << b << endl;

    // calculator<int> cal;
    // calculator<float> calf;
    // calculator<string> cals;

    // cout <<"sum : "<< cal.setData(20,15,sum) << endl;
    // cout <<"sub : "<< cal.setData(20,15,sub) << endl;
    // cout <<"mul : "<< cal.setData(20,15,mul) << endl;
    // cout <<"div : "<< cal.setData(20,15,devisoin) << endl;

    // cout <<"sum : "<< calf.setData(20.5,15.45,sum) << endl;
    // cout <<"sub : "<< calf.setData(20.5,15.45,sub) << endl;
    // cout <<"mul : "<< calf.setData(20.5,15.45,mul) << endl;
    // cout <<"div : "<< calf.setData(20.5,15.45,devisoin) << endl;

    // // cout << cals.setData("Ram","Sitha",sum) << endl;
    // // cout << cals.setData("Ram","Sitha",sub) << endl;
    // // cout << cals.setData("Ram","Sitha",mul) << endl;
    // // cout << cals.setData("Ram","Sitha",devisoin) << endl;

    // cout << maxOfthree(10,20,30) << endl;
    // cout << maxOfthree(10.32,20.23,20.22) << endl;

    // int intarray[]={4,6,2,7,10,2,1};
    // float farray[]={1.2,32.2,43.3,12.7,6.32,8.12,10.22};
    // int length = 7;

    // printArray(intarray,length);
    // printArray(farray,length);

    // shortArray(intarray,7);
    // shortArray(farray,7);

    // printArray(intarray,length);
    // printArray(farray,length);

    cout << sumNum(10,20.25) << endl;
    return 0;
}