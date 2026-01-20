#include <iostream>
#include<cmath>
#include<string>
using namespace std;

string readCode()
{
    string code;
    cout<<"enter 3 capital Letter\n";
    cin>>code;
    return code;
}

void printFromAAA2ZZZ(string Secretcode)
{
    string word ="";
    string code = Secretcode;
    int trial=1;
    for(int i=65; i<=90; i++)
        {
            for(int j =65; j<=90; j++)
                {
                    for(int k=65; k<=90; k++)
                        {
                            word= word + char(i);
                            word= word + char(j);
                            word= word + char(k);
                            if(code!=word)
                                {
                                    trial++;
                                }
                            else
                                {
                                    cout<<"code is "<<word<<endl;
                                    cout<<"Found after: "<<trial<<" Trials";
                                }
                            word="";
                        }
                }
        }
}
int main()
{
    string code = readCode();
    printFromAAA2ZZZ(code);
    return 0;
}
