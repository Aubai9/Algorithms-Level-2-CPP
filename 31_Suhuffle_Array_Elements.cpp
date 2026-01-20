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



void FillArray1ToN(int arr[100], int &arrLength)
{
    cout << "Enter number of elements:\n";
    cin >> arrLength;


    for (int i = 0; i < arrLength; i++)
        arr[i] = i+1;
}

int RandomNumber(int From, int To)
{

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void shuffleArray(int arr[100],int length)
{
    for(int i=0 ; i< length; i++)
        {
            int index1= RandomNumber(1,length -1);
            int index2= RandomNumber(1,length-1);
            swap(arr[index1],arr[index2]);
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


    FillArray1ToN(arr, arrLength);


    cout << "\nArray elements before Suhuffle:\n";
    PrintArray(arr, arrLength);


    shuffleArray(arr, arrLength);


    cout << "\nArray elements After Suhuffle:\n";
    PrintArray(arr, arrLength);

    return 0;
}
