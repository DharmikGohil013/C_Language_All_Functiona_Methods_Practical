#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    ofstream get1;
    cout<<"enter the string : - ";
    char s[90];
    cin>>s;
    int l;
    l=strlen(s);
    get1.open("string ", ios::in | ios::out);
    
    for(int i=0;i<l;i++)
    {
        get1.put(s[i]);
        get1.seekp(0);
    }
    return 0 ;
}