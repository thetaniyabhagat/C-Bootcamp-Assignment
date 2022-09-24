#include<iostream>
using namespace std;
class Time 
{
    private:
    int h;
    int m;
    int s;
    public:
    friend istream& operator>>(istream& ,Time&);
    friend ostream& operator<<(ostream& ,Time);
    bool operator==(Time t)
    {
        return ((h==t.h)&&(m==t.m)&&(s==t.s));
    }
};
ostream& operator<<(ostream& out,Time t)
{
      out<<"Hours : "<<t.h<<endl<<"Minutes : "<<t.m<<endl<<"Seconds : "<<t.s<<endl;
      return out;
}
istream& operator>>(istream& in,Time& t)
{

      cout<<"Enter hours : ";
      in>>t.h;
      cout<<endl<<"Enter minutes : ";
      in>>t.m;
      cout<<endl<<"Enter seconds : ";
      in>>t.s;
      return in;
}
int main()
{
    Time t1,t2;
    cout<<"Enter First Time"<<endl<<"---------------------"<<endl;
    cin>>t1;
    cout<<"First Time"<<endl;
    cout<<t1;
    cout<<"Enter Second Time"<<endl<<"---------------------"<<endl;
    cin>>t2;
    cout<<"Second Time"<<endl;
    cout<<t2;
    if(t1==t2)
    cout<<"Times are Same";
    else
    cout<<"Times are not same";
    return 0;
}
