#include<iostream>
using namespace std;

class abhishek{
    public:
    int a;
    int b;
    int c;
    abhishek(){
        cout << "Default called\n";
        a = 10;
        b = 20;
        c = 30;
    }
    abhishek(int x, int y){
        cout << "Parameterized call\n";
        a=x;
        b=y;
        c=1000;
    }

    abhishek (int x, int y, int z ) : a(x),b(y),c(z){}
   
    void getData(){
        cout << "Memberwise called\n";
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
    }

    void setData(int x, int y, int z) {
        a=x;
        b=y;
        c=z;
    }

    ~abhishek(void){
        cout << "distructor called\n";
    };       
};

class sachin : public abhishek{
    int d;
    public:
    void setData(int x, int y, int z,int m)
    {
        a=x;
        b=y;
        c=z;
        d=m;
    }
    void getData(){
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
        cout << "d : " << d << endl;
    }

};

int main()
{
    abhishek node;
    sachin node1;

    node.setData(10,20,30);
    cout << "node.getData();\n";
    node.getData();

    cout << "node1.getData()\n";
    node1.getData();
    
    node1.setData(100,200,300,400);
    cout << "node1.getData()\n";
    node1.getData();
   

    return 0;
}