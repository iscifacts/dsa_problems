#include<iostream>
using namespace std;
int lower_bound(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int idx=0;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {e=mid-1;
        idx=mid;}
        else if(arr[mid]<key)
        s=mid+1;
        else
        e=mid-1;
    }
    return idx;
}
int upper_bound(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int idx=0;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {s=mid+1;
        idx=mid;}
        else if(arr[mid]<key)
        s=mid+1;
        else
        e=mid-1;
    }
    return idx;
}
int search_insert_position(int arr[],int n,int key)
{
   int s=0;
   int e=n-1;
   int ans=n;
   while(s<=e)
   {
    int mid=s+(e-s)/2;
       if(arr[mid]>=key)
       {
        ans=mid;
        e=mid-1;
       }
       else
       {
        s=mid+1;
       }

   }
   return ans;
}

int main()
{
    int n;
    int arr[]={1,12,23,33,34,34,34,54,67,78,98,56};
    n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int lower_index=lower_bound(arr,n,key);
    int upper_index=upper_bound(arr,n,key);
    int freq=upper_index - lower_index;
    cout<<"Lower Index: "<<lower_index<<endl;
    cout<<"Upper Index: "<<upper_index<<endl;
    cout<<"Frequency: "<<freq+1<<endl;
    int ele;
    cout<<"Enter element to insert: ";
    cin>>ele;
    int pos=search_insert_position(arr,n,ele);
    cout<<pos<<endl;
    return 0;
}
