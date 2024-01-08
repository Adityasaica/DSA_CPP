#include<iostream>
using namespace std;
int main()
{
    //grade the students with respect to their grades
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    char grade;
    if(marks<25)
    {
        grade='F';
    }
    else if(marks<=44)
    {
        grade='E';
    }
    else if(marks<=49)
    {
        grade='D';
    }
    else if(marks<=59)
    {
        grade='C';
    }
    else if( marks<=79)
    {
        grade='B';
    }
    else
    {
        grade='A';
    }
    cout<<"The Obtained Grade is :"<<grade;
}