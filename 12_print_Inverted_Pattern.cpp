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
    while(number>0)
        {
            remainder= number%10;
            number = number /10;
        }
    return number;
}

void printInvertedPattern(int number)
{
    int reverseNumber =ReverseNumber(number);
    for(int i=number; i>0; i--)
        {
            for(int j = i; j>=1; j--)
                {
                    cout<<i;
                }
            cout<<endl;
        }
}

int main()
{
    int Number = readPositiveNumber("please enter number");
    printInvertedPattern(Number);
    return 0;
}
