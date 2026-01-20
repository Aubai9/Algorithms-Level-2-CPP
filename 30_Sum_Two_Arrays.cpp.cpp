#include <iostream>
#include<cmath>

using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };


enPrimNotPrime CheckPrime(int Number)
{

    int M = round(Number / 2);


    for (int Counter = 2; Counter <= M; Counter++)
        {

            if (Number % Counter == 0)
                return enPrimNotPrime::NotPrime;
        }


    return enPrimNotPrime::Prime;
}


int RandomNumber(int From, int To)
{

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArray(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;


    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void SumTwoArray(int arr[100],int arr2[100],int arr3[100],int length)
{
    for(int i =0; i< length; i++)
        {
            arr3[i] = arr2[i]+arr[i];
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


    FillArray(arr, arrLength);

    int arr2[100];

    FillArray(arr2, arrLength);

    int arr3[100];

    SumTwoArray(arr, arr2, arr3,arrLength);


    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);


    cout << "\nArray 2 elements:\n";
    PrintArray(arr2,arrLength);

    cout << "\nArray 3 elements::\n";
    PrintArray(arr3,arrLength);

    return 0;
}
