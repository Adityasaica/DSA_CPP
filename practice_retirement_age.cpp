#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age of the Employee :";
    cin>>age;
    if(age<=18)
    {
        cout<<"Not eligible for Job!";
    }
    else if(age<=54)
    {
        cout<<"ELigible for Job";
    }
    else if(age<=57)
    {
        cout<<"Eligible for job,,But Retire Soon!";
    }
    else{
        cout<<"Its time for the Retirement";
    }

}