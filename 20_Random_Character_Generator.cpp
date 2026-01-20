
#include <iostream>
#include <cstdlib>
#include<string>
#include<ctime>
using namespace std;

int RandomNumber(int from, int to)
{
    int randnumber = rand()% (to - from + 1) + from;
    return randnumber;
}

enum  enCharTYPE
{
    smallLetter =1,
    capitalletter=2,
    specaialCharactar =3,
    Digit =4
};
char getRandomChar(enCharTYPE charType)
{
    switch(charType)
        {
        case enCharTYPE::smallLetter:
            return char(RandomNumber(97,122));
            break;
        case enCharTYPE::capitalletter:
            return char(RandomNumber(65,90));
            break;
        case enCharTYPE::specaialCharactar:
            return char(RandomNumber(33,47));
            break;
        case enCharTYPE::Digit:
            return char(RandomNumber(48,57));
            break;
        }
}
int main()
{
    srand((unsigned)time(NULL));
    cout<<getRandomChar(enCharTYPE::smallLetter)<<endl;
    cout<<getRandomChar(enCharTYPE::capitalletter)<<endl;
    cout<<getRandomChar(enCharTYPE::specaialCharactar)<<endl;
    cout<<getRandomChar(enCharTYPE::Digit)<<endl;
    return 0;
}
