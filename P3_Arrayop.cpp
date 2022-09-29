#include<iostream>
using namespace std;

class Array
{
    int a[100];
    const int size = 100;

public:
    Array()
    {

    }

    void setArray(int n , int index)
    {
        if(index > size)
        {
            cout<<"Array Index Out of Bound Exception"<<endl;
            exit(0);
        }
        a[index] = n;
    }

    void display(int index)
    {
      cout<<a[index]<<endl;
    }

    int operator[](int index)
    {
        if(index >= size)
        {
            cout<<"Array Index Out of Bound Exception"<<endl;
            exit(0);
        }
        return a[index];
    }

};
int main()
{
    Array b;
    b.setArray(17, 5);

    b.display(5);

    cout<<b[100];  // b ne [] operator ko call kiya and 5 as aargument pass hua

    return 0;
}
