#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5};
    //int vect[]={1,2,3,4,5};
    
    cout << "Before Push : ";
    cout << vec.size() <<endl;
    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "After Push  : ";
    cout << vec.size() <<endl;
    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    vec.pop_back();

    cout << "After Pop   : ";
    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front Element : " << vec.front() << endl;
    cout << "Back Element : " << vec.back() << endl;
    cout << "Pos Element : " << vec.at(5) << endl;
    cout << "Is empty ! : " << vec.empty() << endl;
    cout << "deleting the elements . ";
    while(!(vec.empty()))
    {
        cout << ". ";
        vec.pop_back();
    }
    cout << "\nIs empty ! : " << vec.empty() << endl;

    return 0;
}