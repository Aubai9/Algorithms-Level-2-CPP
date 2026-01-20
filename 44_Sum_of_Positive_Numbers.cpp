#include <iostream>
#include<ctime>
using namespace std;

int RandomNumber(int  from,int to)
{
    int randomNumber ;
    randomNumber = rand() % (to - from +1) +from;
    return randomNumber;
}

bool CheckPositiveNumber(int number)
{
    if(number > 0)
        return true;
    else
        return false;
}


void FillArrayWithNumbers(int arr[100], int &length)
{
    cout<<"enter array length: ";
    cin>>length;
    for(int i = 0; i< length; i++)
        {
            arr[i] =RandomNumber(-100,100);
        }
}

int SumPositiveNumber(int arr[100],int arrLength)
{
    int sum = 0;
    for(int i =0 ; i< arrLength; i++)
        {
            if(CheckPositiveNumber(arr[i])== true)
                {
                    sum+= arr[i];
                }
        }
    return sum;
}

void printArray(int arr[100],int length)
{
    for(int i = 0; i< length; i++)
        {
            cout<<arr[i]<<" ";
        }
    cout<<"\n";
}



int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength =0;

    FillArrayWithNumbers(arr,arrLength);
    cout<<"\nArray Elements: ";
    printArray(arr,arrLength);

    cout<<"Sum of Positive Numbers : "<<SumPositiveNumber(arr,arrLength);

    return 0;
}
