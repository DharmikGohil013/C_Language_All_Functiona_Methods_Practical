#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int i;
    ofstream in("data");
    cout<<"hello";
    cin>>i;
    in<<i;
    in.close();
    ifstream out("data");
    out>>i;
    cout<<"hell o"<<i;
    out.close();
}
