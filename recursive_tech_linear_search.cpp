#include<iostream>

using namespace std;


int f;
int lf=0;
void linearsearch(int arr[])
{
    if(arr[lf]==f)
    {
        cout<<"number was found";
    }
    else{
        lf++;
        linearsearch(arr);
    }

}



int main()
{
    int arr[]={2,4,3,7};
    cin>>f;

    linearsearch(arr);

}