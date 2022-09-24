#include<iostream>
using namespace std;
class unar
{
    private:
    int a;
    public:
    void setvalue()
    {
       cout<<"Enter a value:";
       cin>>a;
    }
    void display()
    {
        cout<<"Value is "<<a<<endl;
    }
    unar operator++()
    {
       unar temp;
       temp.a=++a;
       return temp;
    }
    unar operator--()
    {
       unar temp;
       temp.a=--a;
       return temp;
    }
};
int main()
{
    unar u1,u2;
    u1.setvalue();
    u1.display();
    u2=++u1;
    u2.display();
    u2=--u1;
    u2.display();
    return 0;
}