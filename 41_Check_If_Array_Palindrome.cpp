#include <iostream>

using namespace std;

void FillArrayWithNumbers(int arr[100], int &length)
{
    length = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 120;
}

void printArray(int arr[100],int length)
{
    for(int i = 0; i< length; i++)
        {
            cout<<arr[i]<<" ";
        }
    cout<<"\n";
}

bool isPalindromeNumber(int arr[100],int length)
{
    for(int i =0 ; i< length; i++)
        {
            if(arr[i]!= arr[length - i -1])
                {
                    return false;
                }
        }
    return true;
}


int main()
{
    int arr[100];
    int arrLength =0;

    FillArrayWithNumbers(arr,arrLength);
    cout<<"\nArray Elements:"<<endl;
    printArray(arr,arrLength);
    if(isPalindromeNumber(arr,arrLength))
        {
            cout<<"\nYes array is palindrome\n";
        }
    else
        {
            cout<<"\nNO array is NOT palindrome\n";
        }

    return 0;
}
