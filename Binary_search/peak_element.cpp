#include<iostream>
using namespace std;
int peak_element(int arr[],int n)
{   
    if(n==1)
    return 0;
    if(arr[0]>=arr[1])
    return 0;
    if(arr[n-2]<=arr[n-1])
    return n-1;
    int s=1;
    int e=n-2;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1])
        return mid;
        else if(arr[mid]>arr[mid-1])
        s=mid+1;
        else
        e=mid-1;
    }
    return -1;
    
}
int main()
{
   
   int arr[]={3,4,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int ans=peak_element(arr,n);
   cout<<ans<<endl;

   

    return 0;
}