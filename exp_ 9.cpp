#include<iostream>
using namespace std;
void cmtomm()
{
    cout<<"Enter Centimeter : - ";

    float i;
    cin>>i;
    cout<<"Milimter : - "<<i*10;
}
void mmtocm()
{
     cout<<"Enter Milimetre  : - ";

    float i;
    cin>>i;
    cout<<"Centimeter : - "<<i/10;

}
int main()
{
    rep:
    int i;
    cout<<"Enter 1: Centimeter to Milimetre";
    cout<<"\nEnter 2: Milimeter to Centimet";
    cin>>i;
    switch(i)
    {
        case 1:
        {
            cmtomm();
            break;
        }
        case 2:
        {
            mmtocm();
            break;
        }
        default:
        {
            cout<<"Not use ";
            goto rep;
        }
    }
   // float cm,mm;

    return 0;
}