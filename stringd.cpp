#include<iostream>
using namespace std;
int main()
{
    //Strings and getline
    //getline will be picking the complete line until a new line
    //charecter can store all 256 charecters in english alphabets

    string s;
    cin>>s;
    cout<<s;
    string s2;
    getline(cin,s2);
    cout<<s2<<endl;;
    char g;
    cin>>g;
    cout<<g<<endl;
}