#include <iostream>

using namespace std;

float ReadNumber()
{
    float number;
    cout<<"enter the number\n";
    cin>>number;
    return number;
}

int RoundNumber(float number)
{
    int roundedNumber = int(number);
    return roundedNumber;
}

int main()
{
    float number = ReadNumber();

    cout<<RoundNumber(number);

    return 0;
}
