//functions a block of code that runs only when it was called
//it was used to modular
//increase the readability
//saves time 
//helps user to be non repetitive
//void function is a function that will not return any thing

#include<iostream>
using namespace std;
void print(string s)
{
    cout<<s<<endl;

}
int add(int n1,int n2)
{
    return n1+n2;
}
int main()
{
    print("Adithya");
    cout<<add(1,2)<<" "<<add(34,56)<<endl;
    return 0;
}