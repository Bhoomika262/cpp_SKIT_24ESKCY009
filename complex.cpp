#include<iostream>
using namespace std;

struct Complex
{
    int real;
    int imag;
};

int main()
{
    Complex c1,c2,c3;
    cout<<"Enter the real and imaginary part of complex number 1: ";
    cin>>c1.real>>c1.imag;
    cout<<"Enter the real and imaginary part of complex number 2: ";
    cin>>c2.real>>c2.imag;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    cout<<"Sum= "<<c3.real<<" + "<<c3.imag<<"i";
}