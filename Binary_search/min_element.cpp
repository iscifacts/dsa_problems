// Name: Ishita Agrawal
// Link:https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int s=0;
        int e=n-1;
        int mini=INT_MAX;
        if(arr[s]<=arr[e])
        return arr[s];
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(mid-1 >= 0 && arr[mid]<arr[mid-1])
            return arr[mid];
          
          if(arr[mid]>arr[e])
          {
             s=mid+1;
          }
          else
          {
             e=mid-1;
          }
        }
        return -1;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends