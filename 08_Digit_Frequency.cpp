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

void printDigitFrequencyInNumber(int number,short digit)
{
    int FreqCount =0;
    int remainder =0;
    while(number>0)
        {
            remainder= number%10;
            number = number /10;
            if(digit == remainder)
                {
                    FreqCount++;
                }
        }
    cout<<"Digit: "<<digit<<" Frequency is: "<<FreqCount<<" times"<<endl;
}

int main()
{
    int Number = readPositiveNumber("please enter number");
    int DigitFrequency = readPositiveNumber("please enter Digit");
    printDigitFrequencyInNumber(Number,DigitFrequency);
    return 0;
}
