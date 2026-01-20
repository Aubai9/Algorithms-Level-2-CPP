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

void printReversedNumber(int number)
{
    int remainder =0;
    while(number >0)
        {
            remainder= number%10;
            number /= 10;
            cout<<remainder;
        }
}

int main()
{
    printReversedNumber(readPositiveNumber("please enter number to print the reverse of it"));
    return 0;
}
