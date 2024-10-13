#include<iostream>
#include<conio.h>
using namespace std;
class Year
{
    float year;
    public:
    void int_year(float i)
    {
        float y;
        int te;
        y=i;
        te=i;

        y=y-te;
        y=y*10;
     // i=te-y;
      //  i=i*12;
        cout<<"Year  is  "<<te;
        cout<<"\n\tMonth is "<<y;

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