#include <iostream>
#include<cmath>
using namespace std;

enum enPrimeOrNot {prime=1,notPrime=2};
int readPositiveNumber(string msg)
{
    int number;
    cout<<msg<<endl;
    cin>>number;
    return number;
}

enPrimeOrNot checkPrime(int number)
{
    int m =round(number/2);
    for(int i =2; i<=m; i++)
        {
            if(number%i==0)
                return enPrimeOrNot::notPrime;
        }
    return enPrimeOrNot::prime;
}

void printPrimeNumberToN(int number)
{
    cout<<"Prime Numbers to your number are "<<endl;
    for(int i =1; i<=number; i++)
        {
            if(checkPrime(i)==enPrimeOrNot::prime )
                {
                    cout<<i<<endl;
                }
        }

}
int main()
{
    printPrimeNumberToN(readPositiveNumber("please enter number"));
    return 0;
}
