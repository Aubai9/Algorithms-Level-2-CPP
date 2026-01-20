#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayWithNumbers(int arr[100],int  &length){
  cout<<"enter number of array elements\n";
  cin>>length;
  for(int i= 0;i< length;i++)
    arr[i] = RandomNumber(1,100);
}

void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++){
        cout<<"Array["<<i+1<<"]: ";
        cout<<arr[i]<<"\n";
    }

    cout << "\n";
}

short findNumberPosition(int number,int arr[100],int length){
  for(int i=0;i< length;i++){
    if(arr[i]== number)
        return i;
  }
  return -1;
}


int readNumber(){
   int number;
   cout<<"enter number to find:";
   cin>>number;
   return number;
}


int main() {

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithNumbers(arr, arrLength);

    cout << "\nArray elements:\n";
    PrintArray(arr, arrLength);

    int numberToFind = readNumber();

    short numberPosition = findNumberPosition(numberToFind ,arr,arrLength);

    if(numberPosition == -1){
        cout<<"the number is not found\n";
    }else{
       cout<<"the number found at position: "<< numberPosition<<endl;
       cout<<"the number order: "<< numberPosition + 1<<endl;
    }

    return 0;
}
