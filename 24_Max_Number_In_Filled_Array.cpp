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

void getMaxNumber(int arr[100],int length)
{
    int max =0;
    for(int i=0; i<length; i++)
        {
            if(arr[i]>max)
                max = arr[i];
        }
    cout<<"\nMax Number is: "<<max;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = ReadPositiveNumber("enter number of array elments");
    FillArrayElements(arr,arrLength);
    ShowArrayElments(arr,arrLength);
    getMaxNumber(arr,arrLength);


    return 0;
}
