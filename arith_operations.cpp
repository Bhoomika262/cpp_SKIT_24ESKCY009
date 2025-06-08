#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    float d;
    cout<<"Choose the operation that you want to perform: "<<endl;
    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
    cin>>n;
    cout<<"Now, enter two numbers: ";
    cin>>a>>b;
    switch(n)
    {
        case 1:
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
        break;

        case 2: 
        cout<<"Difference of "<<b<<" and "<<b<<" is "<<a-b;
        break;

        case 3:
        cout<<"Product of "<<a<<" and "<<b<<" is "<<a*b;
        break;

        case 4: 
        cout<<"Division of "<<a<<" and "<<b<<" is "<<d;
        break;

        default:
        cout<<"Invalid option";
    }
}