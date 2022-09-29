#include<iostream>
using namespace std;
class Complex
{
    int r;
    int i;
    public:
    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);

};
ostream& operator<<(ostream& out,Complex c)
{
   cout<<"Complex Number is : ";
   out<<c.r<<"+"<<c.i<<"i"<<endl;
   return out;
}
istream& operator>>(istream& in,Complex& c)
{
   cout<<"Enter real part : ";
   in>>c.r;
   cout<<"Enter imaginary part : ";
   in>>c.i;
   return in;
}    
int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}