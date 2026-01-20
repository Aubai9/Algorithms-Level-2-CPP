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

void printSumOfDigits(int number)
{
    int remainder =0,sum=0;
    while(number >0)
        {
            remainder= number%10;
            number /= 10;
            sum+= remainder;
        }
    cout<<"the sum of digits: "<<sum<<endl;
}

int main()
{
    printSumOfDigits(readPositiveNumber("please enter number"));
    return 0;
}
