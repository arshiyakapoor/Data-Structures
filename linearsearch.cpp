#include<iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
 int main()
 {
    int x,j,a;
    cout<<"enter the size of arrary: ";
    cin>>a;
    int arr[a];
    cout<<"enter the values of array: ";
    for(j=0;j<a;j++)
    {
        cin>>arr[j];
    }
    cout<<"the array is: ";
    for(j=0;j<a;j++)
    {
        cout<<arr[j];
    }
    cout<<"enter the element to be searched: ";
    cin>>x;
    int n = (int)sizeof(arr)/(int)sizeof(arr[0]);
    int result= search(arr,n,x);
    if(result==-1)
    {cout<<"element is not present in array.";}
    else
    {cout<<"element is present at index: "<<result; }
    return 0;
 }
