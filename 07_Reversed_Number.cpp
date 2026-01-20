#include <iostream>
#include<cmath>
using namespace std;

int readPositiveNumber(string msg)
{
    int number=0;
    do
        {
            cout<<msg<<endl;
            cin>>number;
        }
    while(number<=0);
    return number;
}

int printReverseNumber(int number)
{
    int remainder =0;
    int number2=0;
    while(number >0)
        {
            remainder= number%10;
            number =number / 10;
            number2 = number2*10+remainder;
        }
    return number2;
}

int main()
{
    int reversedNumber= printReverseNumber(readPositiveNumber("please enter number"));
    cout<<"Reversed number: " << reversedNumber;
        return 0;
}
