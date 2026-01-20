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

void CopyArr(int arrSource[100],int arrDestination[100],int length)
{
    for(int i =0 ; i<length; i++)
        {
            arrDestination[i]= arrSource[i];
        }
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = ReadPositiveNumber("enter number of array elments");
    FillArrayElements(arr,arrLength);
    int arr2[100];
    CopyArr(arr,arr2,arrLength);
    cout<<"Arr1 :"<<endl;
    ShowArrayElments(arr,arrLength);
    cout<<"\nArr2 :"<<endl;
    ShowArrayElments(arr2,arrLength);



    return 0;
}
