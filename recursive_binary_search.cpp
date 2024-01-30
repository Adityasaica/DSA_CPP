#include<iostream>

using namespace std;

int f;
void binarysearch(int arr[],int min,int max)
{
    int mid=(min+max)/2;
    if(arr[mid]==f)
    {
        cout<<"found";
    }
    else if(arr[mid]<f)
    {
        min=mid;
        return binarysearch(arr,min,max);
    }
    else if(arr[mid]>f){
        max=mid;
        return binarysearch(arr,min,max);

    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    cin>>f;
    binarysearch(arr,0,5);

}