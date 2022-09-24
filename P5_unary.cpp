#include<iostream>
using namespace std;

class Numbers
{
    int x,y,z;
    public:
    void getvalue(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
};
int main()
{
   Numbers n1,n2;
    cout<<"-----Actual Numbers----- "<<endl;
   n1.getvalue(2,4,9);
   n1.display();
   cout<<"-----Negated Numbers----- "<<endl;
   n2=-n1;
   n2.display();
   return 0;
}