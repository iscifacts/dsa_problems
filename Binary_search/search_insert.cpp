
//Name-Ishita Agrawal 
//Link:https://www.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==k)
            return mid;
           else if(arr[mid]>k)
           e=mid-1;
           else
           s=mid+1;
            
        }
        return e+1;
        // code here
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
