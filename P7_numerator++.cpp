#include<iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;
    public:
    fraction(long n=0,long d=0){
        numerator=n;
        denominator=d;
    } 
    friend istream& operator>>(istream& in,fraction& f)
    {
        cout<<endl<<"Numerator : ";
        in>>f.numerator;
        cout<<endl<<"Denominator : ";
        in>>f.denominator;
        return in;

    }
    friend ostream& operator<<(ostream& out,fraction f)
    {
        out<<f.numerator<<"/"<<f.denominator<<endl;
        return out;
    }
    fraction operator++(int)
    {
        numerator++;
        denominator++;
        return (*this);
    }
    fraction operator++()
    {
        ++numerator;
        ++denominator;
        return (*this);
    }
};
int main()
{
    fraction f1,f2;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
     cout<<f2;
    cout<<"Enter 1st Fraction Value"<<endl;
    cin>>f1; 
    cout<<"f1++ : ";
    f1++;
    cout<<f1;
    cout<<"++f1 : ";
    ++f1;
    cout<<f1;
    cout<<"Enter 2nd Fraction Value";
    cin>>f2;
    cout<<endl<<endl<<"f2 = ++f1"<<endl;
    f2=++f1;
    cout<<endl<<"f1 : ";
    cout<<f1;
    cout<<endl<<"f2 : ";
    cout<<f2;
    cout<<endl<<"f2 = f1++"<<endl;
    f2=f1++;
    cout<<endl<<"f1 : ";
    cout<<f1;
    cout<<endl<<"f2 : ";
    cout<<f2;
    return 0;
}
