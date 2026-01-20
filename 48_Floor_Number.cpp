#include <iostream>

using namespace std;

float ReadNumber()
{
    float number;
    cout<<"enter the number\n";
    cin>>number;
    return number;
}

float FloorNumber(float number)
{
    if(number >0)
        return int(number);
    else
        return int(number) -1;
}

int main()
{
    float number = ReadNumber();

    cout<<FloorNumber(number);

    return 0;
}
