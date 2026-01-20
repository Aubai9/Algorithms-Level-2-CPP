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
    length =10;

    arr[0]= 10;
    arr[1]= 10;
    arr[2]= 50;
    arr[3]= 50;
    arr[4]= 70;
    arr[5]= 70;
    arr[6]= 70;
    arr[7]= 70;
    arr[8]= 70;
    arr[9]= 90;
}

short FindNumberPositionInArray(int number,int arr[100],int length)
{
    for(int i = 0; i<length; i++)
        {
            if(arr[i]==number)
                return i;
        }
    return -1;
}

bool IsNumberInArray(int number,int arr[100],int length)
{
    return FindNumberPositionInArray(number,arr,length) != -1;
}

void AddArrayElement(int number, int arr[100],int &length)
{
    length++;
    arr[length -1] = number;
}

void CopyArrayDistinctElemntsUsingAddArray(int arrSrc[100],int arrDest[100],int length,int &DestLength)
{
    for(int i =0 ; i< length; i++)
        {
            if(!IsNumberInArray(arrSrc[i],arrDest,DestLength))
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

    CopyArrayDistinctElemntsUsingAddArray(arr,arr2,arrLength,arr2Length);

    cout<<"Array 1 elements:";
    PrintArray(arr,arrLength);

    cout<<"\nArray 2 elements:";
    PrintArray(arr2,arr2Length);
    return 0;
}
