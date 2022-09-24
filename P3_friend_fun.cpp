#include<iostream>
using namespace std;
class complex
{
    private:
    int r;
    int i;
    public:
    void setvalue()
    {
        cout<<"Enter real part:";
        cin>>r;
        cout<<"Enter imaginary part:";
        cin>>i;
    }
    void display()
    {
        cout<<r<<"+"<<i<<"i"<<endl;
    }
    friend complex operator+(complex,complex);    
};
complex operator+(complex a,complex b)
{
    complex temp;
    temp.r=a.r+b.r;
    temp.i=a.i+b.i;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.setvalue();
    c1.display();
    c2.setvalue();
    c2.display();
    cout<<"Sum of complex numbers is ";
    c3=c1+c2;
    c3.display();
    return 0;
}