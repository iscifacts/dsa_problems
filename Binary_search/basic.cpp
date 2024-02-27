#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int target)
{
   int s=0;
   int e=n-1;
   while(s<e)
   {
    int mid=s + (e-s)/2;
    if(arr[mid]==target)
    return mid;
    else if(arr[mid]>target)
    e=mid-1;
    else
    s=mid+1;
    }
    return -1;
}
int main()
{
    int arr[10]={1,2,3,4,45,54,67,78,98,100};
    int n=10;
    cout<<n;
    int key;
    cin>>key;
    int ans=binary_search(arr,n,key);
    cout<<ans;
}
