#include <iostream>
#include<cmath>
#include<string>
using namespace std;

enum enCharType {smallLetter=1,capitalLetter=2,speicalCharacter=3,Digit =4};



int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomChar(enCharType charType)
{
    switch(charType)
        {
        case enCharType::smallLetter:
        {
            return char(RandomNumber(97,122));
            break;
        }
        case enCharType::capitalLetter:
        {
            return char(RandomNumber(65,90));
            break;
        }
        case enCharType::speicalCharacter:
        {
            return char(RandomNumber(33,47));
            break;
        }
        case enCharType::Digit:
        {
            return char(RandomNumber(48,57));
            break;
        }
        }
    return '/0';
}

void PrintArray(string arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        {
            cout<<"Array["<<i+1<<"]: ";
            cout<<arr[i]<<"\n";
        }

    cout << "\n";
}

string GenerateWord(enCharType CharTyp,short length)
{
    string word;
    for(int i=0; i< length; i++)
        {
            word = word + GetRandomChar(CharTyp);
        }
    return word;
}

string GenerateKey()
{
    string key ="";
    key = GenerateWord(enCharType::capitalLetter,4)+"-";
    key = key + GenerateWord(enCharType::capitalLetter,4)+"-";
    key = key + GenerateWord(enCharType::capitalLetter,4)+"-";
    key = key + GenerateWord(enCharType::capitalLetter,4);
    return key;
}

void FillArrayWithKeys(string arr[100],int  length)
{
    for(int i= 0; i< length; i++)
        arr[i] = GenerateKey();
}

int main()
{

    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength;
    cout<<"enter how many keys?"<<endl;
    cin>>arrLength;
    FillArrayWithKeys(arr, arrLength);

    cout << "\nArray elements:\n";
    PrintArray(arr, arrLength);



    return 0;
}
