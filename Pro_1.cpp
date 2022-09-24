#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    public:
    void setvalue(int a,int b)
    {
        real =a;
        imag=b;
    }
    void display()
    {
        cout<<endl<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator+(Complex c)
    {
       Complex temp;
       temp.real=real+c.real;
       temp.imag=imag+c.imag;
       return temp;
    }
    Complex operator-(Complex c)
    {
       Complex temp;
       temp.imag=imag-c.imag;
       temp.real=real-c.real;
       return temp;
    }
    Complex operator*(Complex c)
    {
       Complex temp;
       temp.imag=imag*c.imag;
       temp.real=real*c.real;
       return temp;
    }
    bool operator==(Complex c)
    {
       return ((real==c.real)&&(imag==c.imag));
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setvalue(6,2);
    c2.setvalue(6,2);
    cout<<"First complex number is :";
    c1.display();
    cout<<"Second complex number is :";
    c2.display();
    c3=c1+c2;
    c3.display();
    c3=c1-c2;
    c3.display();
    c3=c1*c2;
    c3.display();
    if(c1==c2)
    cout<<"Same";
    else
    cout<<"Not same";
    return 0;
}