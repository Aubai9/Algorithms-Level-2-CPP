#include <iostream>
#include<cmath>
using namespace std;

float ReadNumber(){
   float number;
   cout<<"enter the number\n";
   cin>>number;
   return number;
}

float SqrtNumber(float number){
     if(number > 0)
        return pow(number,0.5);
     else
        return 0;
}

int main()
{
    float number = ReadNumber();

    cout<<SqrtNumber(number);

    return 0;
}
