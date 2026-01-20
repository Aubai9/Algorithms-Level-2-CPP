#include <iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
        {
            cout << Message << endl;
            cin >> Number;
        }
    while (Number <= 0);
    return Number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayElements(int arr[100],int length)
{
    for(int i=0; i<length; i++)
        {
            arr[i] = RandomNumber(1,10);
        }

}

void ShowArrayElments(int arr[100],int length)
{
    cout<<"Elements array are: \n";
    for(int i=0; i<length; i++)
        {
            cout<<"Element["<<i+1<<"]: ";
            cout<<arr[i]<<endl;
        }

}


int main()
{
    int arr[100];
    int arrLength = ReadPositiveNumber("enter number of array elments");
    FillArrayElements(arr,arrLength);
    ShowArrayElments(arr,arrLength);
    return 0;
}
