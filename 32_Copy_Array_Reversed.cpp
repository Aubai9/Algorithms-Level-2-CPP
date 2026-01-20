#include <iostream>
#include<cmath>

using namespace std;


void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int RandomNumber(int From, int To)
{

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArray1To100(int arr[100], int &arrLength)
{
    cout << "Enter number of elements:\n";
    cin >> arrLength;


    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1,100);
}

void CopyAndReverseNumber(int arr[100],int arr2[100],int length)
{
    for(int i=0; i< length; i++)
        {
            arr2[i]= arr[length - 1 - i];
        }

}


void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    int arr2[100];

    FillArray1To100(arr, arrLength);


    cout << "\nArray1 elements:\n";
    PrintArray(arr, arrLength);


    CopyAndReverseNumber(arr,arr2,arrLength);


    cout << "\nArray2 elements :\n";
    PrintArray(arr2, arrLength);


    return 0;
}
