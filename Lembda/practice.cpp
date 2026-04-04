#include<iostream>
using namespace std;

int sumFunptr(int a, int b)
{
    cout << "Fucnction pointer.\n";
    return a+b;
}

int main()
{
  
    int x=50;
    int y=40;
    auto greet = [](){
        cout << "Hello from the Lambda!\n";
    };

    auto sum = [](int a, int b) ->int {
            cout << "This is Lambda with parameters.\n";
            return a+b;
    };

    auto sub = [x,y]() ->int {
        cout << "This is Lambda with Capture variable.\n";
        return x-y;
    };

    greet();
    cout << sum(10,20) << endl;
    cout << sub() << endl;

    int (*ptr)(int,int);
    ptr=sumFunptr;
    

    cout << (*ptr)(10,20)<<endl;

    return 0;
}

int a = [](int a, int b){
    return a+b;
}