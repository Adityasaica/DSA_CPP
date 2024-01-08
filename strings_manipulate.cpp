//array of charecters was called as an string
#include<iostream>

using namespace std;
int main()
{
    string n="Adithya";
    cout<<n[3]<<endl;
    cout<<n[2]<<endl;
    string s="striver";
    int l=s.size();
    s[l-1]='z';
    cout<<s<<endl;
    return 0;

}