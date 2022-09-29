#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    void setData(int real,int img)
    {
       this->real=real;
       this->img=img;
    }
    void getData()
    {
        cout<<real<<"-"<<img<<"i"<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(4,3);
    c1.getData();
    return 0;
}