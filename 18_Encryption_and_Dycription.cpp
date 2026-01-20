#include <iostream>
#include<cmath>
#include<string>
using namespace std;

string readMSG()
{
    string msg;
    cout<<"enter Your Word\n";
    cin>>msg;
    return msg;
}

void Encryption(string msg)
{
    for(int i =0; i<msg.length(); i++)
        {
            int(msg[i])*2;
        }
    cout<<"text After encryption: ";
    for(int j=0; j<msg.length(); j++)
        {
            cout<<char(msg[j]*2);
        }
    cout<<endl;
}
void Dycription(string msg)
{
    for(int i =0; i<msg.length(); i++)
        {
            int(msg[i])/2;
        }

}
int main()
{
    string msg = readMSG();
    cout<<"text before encryption: "<<msg<<endl;
    Encryption(msg);
    cout<<"text After Dycription: "<<msg<<endl;
    Dycription(msg);
    return 0;
}
