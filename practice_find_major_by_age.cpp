#include<iostream>
using namespace std;
int main()
{
    //take input of age
    int age;
    cin>>age;
    if(age>=18)
    {
        cout<<"person was a Major and eligible for vote"<<endl;
    }
    else{
        cout<<"person was a minor \'NOT ALLOWED TO VOTE\'";
    }
}