#include<iostream>
using namespace std;

struct Student
{
    char str[20];
    int age;
    float marks;
};

int main()
{
    Student s1;
    cout<<"Enter your name: ";
    fgets(s1.str, sizeof(s1.str), stdin);
    cout<<"Enter your age: ";
    cin>>s1.age;
    cout<<"Enter your marks: ";
    cin>>s1.marks;
    cout<<"\nName: "<<s1.str<<"Age: "<<s1.age<<"\nMarks: "<<s1.marks;
}