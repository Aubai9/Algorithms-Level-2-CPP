#include <iostream>
#include<cmath>
#include<string>
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

int ReverseNumber(int number)
{
    int remainder =0;
    int number2 =0;
    while(number>0)
        {
            remainder= number%10;
            number = number /10;
            number2 = number2 *10 +remainder;
        }
    return number2;
}

void printDigit(int number)
{
    cout<<"show Number Digit"<<endl;
    int remainder =0;
    while(number>0)
        {
            remainder =number%10;
            number=number/10;
            cout<<remainder<<endl;
        }
}
int main()
{
    int Number = readPositiveNumber("please enter number");
    printDigit(ReverseNumber(Number));
    return 0;
}
