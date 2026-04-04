#include<iostream>
#include<chrono>
#include<thread>
#include<mutex>
using namespace std;

// typedef unsigned long long ull;
// ull oddSum,evenSum;

// int findOddSum(int a,int b){

//     for(ull i =a ;i<b;i++)
//     {
//         if(i&1)
//         {
//             oddSum += i;
//         }
//     }
//     return oddSum;
// }

// int findEvenSum(int a,int b){

//     for(ull i =a ;i<b;i++)
//     {
//         if(!(i&1))
//         {
//             evenSum += i;
//         }
//     }
//     return evenSum;
// }

mutex m;
int mony=0;

void TH()
{
    m.lock();
    ++mony;
    cout << "thred\n";
    m.unlock();
}
int main()
{
//     ull start =0, end = 1900000000;

//     auto timeStart = chrono :: high_resolution_clock :: now ();

//     // oddSum  = findOddSum(start, end);
//     // evenSum = findEvenSum(start, end);

//     thread t11(findOddSum, start,end);
//    // thread t12(findOddSum, end/2,end);
//     thread t21(findEvenSum, start,end);
//    // thread t22(findEvenSum, end/2,end);

//     t11.join();
//    // t12.join();
//     t21.join();
//    // t22.join();

//     auto timeEnd = chrono :: high_resolution_clock :: now ();

//     auto duration = chrono :: duration_cast<chrono::microseconds>(timeEnd - timeStart);

//     cout << "oddSum : " << oddSum << endl;
//     cout << "evenSum: " << evenSum << endl;
//     cout << duration << endl;
//     cout << "Time taken : " << duration.count()/1000000 << endl;

thread t1(TH);
thread t2(TH);

t1.join();clea
t2.join();
 
cout << mony << endl;
    return 0;
}