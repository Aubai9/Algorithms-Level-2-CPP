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

void readArrayElemnts(int arr[100],int length)
{
    cout<<"enter array elements: \n";
    for(int i=0; i<length; i++)
        {
            cout<<"Element["<<i+1<<"]: ";
            cin>>arr[i];
        }

}

void ShowArrayElments(int arr[100],int length)
{
    cout<<"Elements array Are: \n";
    for(int i=0; i<length; i++)
        {
            cout<<"Element["<<i+1<<"]: ";
            cout<<arr[i]<<endl;
        }

}

int TimesRepeated(int number,int arr[100],int length)
{
    int counter =0;
    for(int i =0; i<=length -1; i++)
        {
            if(number == arr[i])
                {
                    counter++;
                }
        }
    return counter;
}

int main()
{
    int arr[100];
    int arrLength = ReadPositiveNumber("enter number of array elments");
    readArrayElemnts(arr,arrLength);
    ShowArrayElments(arr,arrLength);
    int NumberToCheck= ReadPositiveNumber("enter the number to check");
    cout<<"Number "<<NumberToCheck<<" is repeated ";
    cout<< TimesRepeated(NumberToCheck,arr,arrLength)<<" Times";
    return 0;
}
