#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream out; 
    out.open("name");
    out<<"india";
    out<<"pakistan";
    out.close();
    out.open("capital");
    out<<"delhi";
    out<<"karachi";
    out.close();

    ifstream in;
    in.open("name");
    in;
    cin.ignore();
		cin.get();

    return 0;
}
