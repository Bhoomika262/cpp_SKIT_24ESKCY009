#include<iostream>
using namespace std;

int main()
{
    int i,j;
    cout<<"Enter the number whose multiplication table you want: ";
    cin>>i;
    for(j=1;j<=10;j++)
    {
        cout<<i<<" * "<<j<<" = "<<i*j<<endl;
    }
}