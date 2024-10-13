#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream out("Mydoc.txt");
  int n;
  cout<<"ENTER YOUR PHONE NUMBER : - ";
  cin>>n;
  out<<n<<"\n";
  out.close();
  ifstream print("Mydoc.txt");
  print>>n;
  cout<<"MY PHONE IS :- "<<n;
  print.close();
  cin.ignore();
		cin.get();


    return 0;
}