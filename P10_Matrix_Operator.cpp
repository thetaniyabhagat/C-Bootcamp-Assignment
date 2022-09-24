#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void setmatrix()
    {  int i,j;
        cout<<"Enter Matrix Elements( 3 X 3 ):"<<endl;
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    void display()
    {   int i,j;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
        }
    }
    Matrix operator+(Matrix m)
    {
       Matrix temp;
       int i,j;
       for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
        {
            temp.a[i][j]=a[i][j]+m.a[i][j];
        }
       }
       return temp;
    }
};
int main()
{
    Matrix m1,m2,m3;
    m1.setmatrix();
    m2.setmatrix();
    cout<<endl<<"First Matrix :"<<endl;
    m1.display();
    cout<<endl<<"Second Matrix :"<<endl;
    m2.display();
    cout<<endl<<"Addition of Matrix : "<<endl;
    m3=m1+m2;
    m3.display();
    return 0;
}