#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;

int RandomNumber(int from,int to)
{
    int randomNumber = rand()% (to -from +1)+from;
    return randomNumber;
}

void PrintArray(int arr[100],int length)
{
    for (int i = 0; i < length; i++)
        cout<<arr[i]<<" ";
    cout << "\n";
}

void FillArraywithRandomNumbers(int arr[100],int &length)
{
    cout<<"\nEnter number of array elemnts:\n";
    cin>>length;
    for(int i =0 ; i< length; i++)
        {
            arr[i] = RandomNumber(1,100);
        }
}

void AddArrayElement(int number, int arr[100],int &length)
{
    length++;
    arr[length -1]=number;
}

void CopyArrayElemntsUsingAddArray(int arrSrc[100],int arrDest[100],int length,int &DestLength)
{
    for(int i =0 ; i< length; i++)
        {
            AddArrayElement(arrSrc[i],arrDest,DestLength);
        }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength =0;

    FillArraywithRandomNumbers(arr,arrLength);

    int arr2[100];
    int arr2Length= 0;

    CopyArrayElemntsUsingAddArray(arr,arr2,arrLength,arr2Length);

    cout<<"Array 1 elements:";
    PrintArray(arr,arrLength);

    cout<<"\nArray 2 elements:";
    PrintArray(arr2,arr2Length);
    return 0;
}
