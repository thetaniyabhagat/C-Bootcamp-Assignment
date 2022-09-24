#include<iostream>
using namespace std;
class mystring
{
    char str[100];    
    public:
    void accept_string()
    {
        cout<<"Enter a string : ";
        cin>>str;
    }
    void display_string()
    {
        cout<<str;
    }
    void operator!()
    {
        int i;
        for(i=0;str[i]!='\0';i++)
        {
            if (str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
            else
            if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
        }
        cout<<endl<<"Reverse case of string is : "<<str;
    }
};
int main()
{
    mystring s1;
    s1.accept_string();
    s1.display_string();
    !s1;
    return 0;
}
