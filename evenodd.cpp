#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0)
        cout<<n<<" is neither odd nor even";
    else if(n%2)
        cout<<n<<" is an odd number";
    else
        cout<<n<<" is an even number";
}