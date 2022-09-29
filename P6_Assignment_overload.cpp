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
    void operator=(Complex c)
    {  
        real=c.real;
        imag=c.imag;
    }
};
int main()
{
    Complex c1,c2;
    c1.setvalue(2,3);
    c1.display();
    c2=c1;
    c2.display();
    return 0;
}