#include <iostream>
#include<cmath>
using namespace std;

enum enPerfectOrNot {perfect=1,notPerfect=2};
int readPositiveNumber(string msg)
{
    int number;
    cout<<msg<<endl;
    cin>>number;
    return number;
}

enPerfectOrNot checkPerfect(int number)
{
    int m =round(number/2);
    int sum =0;
    for(int i =1; i<=m; i++)
        {
            if(number%i==0)
                sum+=i;
        }
    if(sum==number)
        return enPerfectOrNot::perfect;
    else
        return enPerfectOrNot::notPerfect;
}

void printPerfectNumberToN(int number)
{
    for(int i =1; i<=number; i++)
        {
            if(checkPerfect(i)==enPerfectOrNot::perfect )
                {
                    cout<<i<<endl;
                }
        }

}
int main()
{
    printPerfectNumberToN(readPositiveNumber("please enter number to print perfect numbers to your number"));
    return 0;
}
