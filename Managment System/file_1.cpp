#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf("ITEM.txt");
    char name[30];
    cout<<"Enter name: - ";
    cin>>name;
    outf<<name<<"\n";
    float cost;
    cin>>cost;
    outf<<cost<<"\n";
    outf.close();
    ifstream print("ITEM.txt");
    print>>name;
    print>>cost;
    cout<<"\n ITEM NAME :- "<<name;
    cout<<"\n COST IS :- "<<cost;
    print.close();
    cin.get();

    
    
    
    return 0;
}