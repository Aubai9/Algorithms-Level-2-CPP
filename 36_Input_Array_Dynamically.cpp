#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int readNumber()
{
    int number;
    cout<<"enter a number :";
    cin>>number;
    return number;
}


void AddArrayElements(int number,int arr[100],int &length)
{
    length++;
    arr[length - 1] = number;
}


void InputUserNumberInArray(int arr[100],int &length)
{
    bool addMore = true;
    do
        {
            AddArrayElements(readNumber(),arr,length);
            cout<<"\nDo You want to add more?[0]NO, [1]YES"<<endl;
            cin>>addMore;
        }
    while(addMore);
}

void PrintArray(int arr[100],int length)
{
    for (int i = 0; i < length; i++)
        cout<<arr[i]<<" ";
    cout << "\n";
}


int main()
{
    int arr[100];
    int arrLength =0;
    InputUserNumberInArray(arr,arrLength);

    cout<<"\nArray Length: "<<arrLength<<endl;
    cout<<"Array elements:";
    PrintArray(arr,arrLength);
    return 0;
}
