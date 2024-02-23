
//Name: Ishita Agrawal
// Link:https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
#include <bits/stdc++.h> 
using namespace std; 
class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int m, int n) 
    {
        vector<int>ans;
        int d=0;
        int l=0;
        int t=0;
        int b=m-1;
        int r=n-1;
        while(l<=r && t<=b)
        {
            if(d==0){
            for(int i=l;i<=r;i++)
            {
                ans.push_back(matrix[t][i]);
            }
             d=1;
             t++;
            }
       
        else if(d==1)
        {
           for(int i=t;i<=b;i++)
           {
               ans.push_back(matrix[i][r]);
           }
           d=2;
           r--;
        }
        else if(d==2)
        {
            for(int i=r;i>=l;i--)
            {
                ans.push_back(matrix[b][i]);
                
            }
            b--;
            d=3;
        }
        else if(d==3)
        {
            for(int i=b;i>=t;i--)
            {
                ans.push_back(matrix[i][l]);
            }
            l++;
            d=0;
        }
        
            
        }
        return ans;
        
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
