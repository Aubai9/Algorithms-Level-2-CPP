#include <iostream>

using namespace std;

float ReadNumber()
{
    float number;
    cout<<"enter the number\n";
    cin>>number;
    return number;
}

float CeilNumber(float number)
{
    if(number > 0)
        return int(number) + 1;
    else
        return int(number) ;
}

int main()
{
    float number = ReadNumber();

    cout<<CeilNumber(number);

    return 0;
}
