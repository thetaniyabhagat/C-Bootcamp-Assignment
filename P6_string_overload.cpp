#include<iostream>
using namespace std;
class CString
{
    string a;
    public:
void setvalue()
{
    cout<<"Enter string : ";
    cin>>a;
}
void display()
{
    cout<<"String is : "<<a<<endl;
}
CString operator+(CString c)
{
   CString temp;
   temp.a=a+c.a;
   return temp;
}
bool operator==(CString s)
{
    return(a==s.a);
}
};
int main()
{
   CString c1,c2,c3;
   c1.setvalue();
   c1.display();
   c2.setvalue();
   c2.display();
   c3=c1+c2;
   c3.display();
   if(c1==c2)
   cout<<"Strings are Same";
   else
   cout<<"Strings are not same";
   return 0;
}