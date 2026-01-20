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



void printInvertedPattern(int number)
{

    for(int i=1; i<=number; i++)
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
