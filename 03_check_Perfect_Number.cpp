#include <iostream>

using namespace std;
string readName()
{
    string name;
    cout<<"enter name:"<<endl;
    getline(cin,name);
    return name;
}
void printName(string name)
{
    cout<<"hello " <<name;
}
int main ()
{
    string name = readName();
    printName(name);
    return 0;
}
