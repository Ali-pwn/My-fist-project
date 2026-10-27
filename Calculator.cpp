#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b;
    char op;
    
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"Enter the operator:"<<endl;
    cin>>op;
    if (op=='+')
    {
        cout<<"The sum is: "<<a+b<<endl;
    }
    else if (op=='-')
    {
        cout<<"The difference is: "<<a-b<<endl;
    }
    else if (op=='*')
    {
        cout<<"The product is: "<<a*b<<endl;
    }
    else if (op=='/')
    {
        cout<<"The quotient is: "<<a/b<<endl;
    }

else if (op== 's')
{
cout<<"the square of a is:"<<sqrt(a)<<endl;
}
else
    {
        cout<<"Invalid operator"<<endl;
    }
    return 0;
}
