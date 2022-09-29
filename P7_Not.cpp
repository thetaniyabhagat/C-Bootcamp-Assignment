#include <iostream>
using namespace std;
class Integer {
private:
    int n;
    int fact=1;

public:
    void getNum()
    {
     cout<<"Enter a number : ";
     cin>>n;
    }
    void dispNum(void)
    {
        cout << "Factorial of "<<n<<" is: " << fact;
    }

    int operator!()
    {
         int i;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
};
int main()
{
    Integer num;
    num.getNum();
    !num;
    num.dispNum();
    return 0;
}