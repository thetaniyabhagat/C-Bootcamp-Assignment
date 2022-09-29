#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;
    public:
    Distance()
    {

    }
    Distance(int a,int b)
    {
        feet=a;
        inches=b;
    }
    void display()
    {
        cout<<"Feet = "<<feet<<"\t"<<"Inches="<<inches<<endl;
    }
    Distance operator()(int a,int b,int c)
    {
        Distance d;
        d.feet=a+c+5;
        d.inches=a+b+15;
        return d;
    }
};
int main()
{
    Distance d1(5,15),d2;

    d2=d1(1,4,9);
    d2.display();
    return 0;
}