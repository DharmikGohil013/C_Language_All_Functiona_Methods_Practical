#include<iostream>
#include<conio.h>
using namespace std;
class Year 
{
    float year;
    public:
    void int_year(int i)
    {
        int y;
        y=i%10;
        y=y*10;
        cout<<"Month is  "<<y;

    }
};
int main()
{
    float year;
     cout<<"\n Enter Year in Float : - ";
     cin>>year;
    Year obj;
    //obj.year1();
    obj.int_year(year);
    cin.ignore();
    cin.get();
    
    return 0;
}