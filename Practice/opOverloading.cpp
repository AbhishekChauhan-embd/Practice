#include<iostream>

using namespace std;

class variables{

    int a;
    int b;

    public:

    variables(int x = 0, int y =0) : a(x), b(y){    }

    variables operator ++(){
        a++;
        b++;
        return *this;
    }

    variables operator +(variables &rObj)
    {
        variables tempObj;
        tempObj.a = this->a+rObj.a;
        tempObj.b = this->b+rObj.b;

        return tempObj;
    }

    void display(){
        cout << "a : "<< a << endl;
        cout << "b : "<< b << endl;  
    }
};

int main()
{
    variables obj(20,30), obj1(50, 10), obj3;

    obj3.display();

    //++obj;
    obj3=obj+obj1;
    obj3.display();
    return 0;
}