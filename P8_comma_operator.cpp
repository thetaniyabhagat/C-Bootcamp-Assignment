#include<iostream>
using namespace std;
class Coordinate
{
    int x;
    int y;
    int z;
    public:
    void setdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z<<endl;
    }
    Coordinate operator,(Coordinate c)
    {
        Coordinate temp;
        temp.x=c.x;
        temp.y=c.y;
        temp.z=c.z;
        return temp;
    }
};
int main()
{
    Coordinate c1,c2,c3;
    c1.setdata(1,4,9);
    c2.setdata(3,7,0);
    c3=(c1,c2);
    c3.display();
    Coordinate c4;
    c4=(c3,c1);
    c4.display();
    return 0;
}