#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
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
    cout<<"Filling array elements: \n";
    for(int i=0; i<length; i++)
        {
            arr[i] = RandomNumber(1,100);
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

void getSumNumbers(int arr[100],int length)
{
    float sum = 0;
    float avg;
    for(int i=0; i<length; i++)
        {
            sum +=arr[i];
        }
    avg = sum/length;
    cout<<"\nAvg is: "<<avg;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = ReadPositiveNumber("enter number of array elments");
    FillArrayElements(arr,arrLength);
    ShowArrayElments(arr,arrLength);
    getSumNumbers(arr,arrLength);


    return 0;
}
