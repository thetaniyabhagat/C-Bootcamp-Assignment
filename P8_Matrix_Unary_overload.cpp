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
        cout<<"Matrix is :"<<endl;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
        }
    }
    Matrix operator-()
    {
        int i,j;
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
        a[i][j]=-(a[i][j]);
        }
    }
};
int main()
{
    Matrix m1,m2;
    m1.setmatrix();
    m1.display();
   -m1;
    m1.display();
    return 0;
}