#include <iostream>
using namespace std;

void squer(int i){
    cout << "Inside the callback function\n"<< i*i << endl;
}

void Qube(int i){
    cout << "Inside the callback function\n"<< i*i*i << endl;
}

void caller (int num, void (*ptr)(int))
{
    cout << "calling callback\n";
    ptr(num);
}

typedef class cl{
    int a;
    int b;

    public:
    cl(){
        //do nothing
    }
    cl(int x, int y) : a(x),b(y){
        cout << x << ", " << y << endl;
    }

    cl operator+(cl obj)
    {
        cl locObj;

        locObj.a = 
    }
}myclass;


class dClass : public cl {

}
int main() {

    myclass obj(10,20);

    

    // cout << "inside main\n";
    // caller(5,squer);
    // caller(5,Qube);



    return 0;
}



