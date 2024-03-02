// Name: Ishita Agrawal
// Link:https://www.geeksforgeeks.org/problems/search-in-a-rotated-array0959
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int Search(vector<int> arr, int K) {
    //code here
    int s=0;
    int n=arr.size();
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==K)
        {
            return mid;
            
        }
        if(arr[s]>=arr[mid])
       {
           if(arr[mid]<=K && arr[e]>=K)
          s=mid+1;
           else
           e=mid-1;
       }
       else
       {
           if(arr[mid]>=K && arr[s]<=K)
           e=mid-1;
           else
           s=mid + 1;
       }
    }
    return -1;
}