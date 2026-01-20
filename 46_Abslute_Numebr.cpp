#include <iostream>

using namespace std;

int AbsFunction(int number)
{
    if(number<0)
        return number * -1;
    else
        return number;
}

float ReadNumber()
{
    float number;
    cout<<"enter the number\n";
    cin>>number;
    return number;
}


int main()
{
    float number = ReadNumber();

    cout<<AbsFunction(number);

    return 0;
}
