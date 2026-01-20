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

int CountDigitFrequency(int number,short digit)
{
    int Freq =0;
    int remainder =0;
    string strNumber = to_string(number);
    while(number>0)
        {
            remainder= number%10;
            number = number /10;
            if(digit==remainder)
                {
                    Freq++;
                }
        }
    return Freq;
}
void printDigitFrequencyInNumber(int number)
{
    for(int i=0; i<10; i++)
        {
            short DigitFrequency =0;
            DigitFrequency =CountDigitFrequency(number,i);
            if(DigitFrequency>0)
                {
                    cout<<"Digit "<<i<<" Frequency is: "<<DigitFrequency<<" Times"<<endl;
                }
        }
}
int main()
{
    int Number = readPositiveNumber("please enter number");
    printDigitFrequencyInNumber(Number);
    return 0;
}
