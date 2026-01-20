#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int readPositiveNumber(string msg){
 int number=0;
 do{
    cout<<msg<<endl;
    cin>>number;
 }while(number<=0);
 return number;
}



void printInvertedPattern(int number){

  for(int i= number + 65 -1;i>=65;i--){
    for(int j = 1;j<= number-((65+number-1)-i);j++){
        cout<<char(i);
    }
    cout<<endl;
}
}

int main()
{
    int Number = readPositiveNumber("please enter number");
    printInvertedPattern(Number);
    return 0;
}
