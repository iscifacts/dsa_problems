// Name: Ishita Agrawal
// Link:https://www.geeksforgeeks.org/problems/search-in-rotated-array-2/1
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int n, vector<int>& A, int key) {
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(A[mid]==key)
            return 1;
            if(A[s]==A[mid] && A[mid]==A[e])
            {
                s=s+1;
                e=e-1;
                continue;
            }
            else if(A[s]<=A[mid])
            {
                if(A[s]<=key && key<=A[mid])
                e=mid-1;
                else
                s=mid+1;
            }
            else
            {
                if(A[mid]<=key && A[e]>=key)
                s=mid+1;
                else
               e=mid-1;
            }
        }
        return 0;
        
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends