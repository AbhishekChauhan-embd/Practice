#include<iostream>
#include<string.h>
using namespace std;

int binaryToDecimal(string& binaryStr);

int main(){

    string binaryString;

    cout << "Enter the binary number.\n";
    cin >> binaryString;

    //cout << binaryToDecimal(binaryString);

    int len;
    int base=1;
    int decimal=0;
    for(int i=binaryString.length()-1;i>=0;i--)
    {

        if(binaryString[i]=='1')
        {   
            decimal=decimal+base;
           
        }
        base=base*2;
    }

    cout << decimal << endl;
    return 0;
}

int binaryToDecimal(string& binaryStr) {
    int decimal = 0;

    for (char bit : binaryStr) {
        // Shift left (multiply by 2) and add current bit
        decimal = decimal * 2 + (bit - '0');
    }

    return decimal;
}

int decimalToBinary(int  num)
{
    string binary;
    for(int i=sizeof(num), int j=0; i>=0 ;i--,j++)
    {   
        binary
    }
}