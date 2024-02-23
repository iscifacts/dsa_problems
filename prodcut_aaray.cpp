//leetcode 

//simple code in ide 
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int out=1;
        for(int i=0;i<n;i++)
        {
            out=out*nums[i];
            ans.push_back(out);
        }
        int p=1;
        for(int i=n-1;i>0;i--)
        {
            ans[i]=ans[i-1]*p;
            p=p*nums[i];
        }
        ans[0]=p;
        return ans;
    }
};*/
#include<iostream>
#include<vector>
using namespace std;
void product_array(int arr[],int n)
{
    int prefix_array[n];
    int mul=prefix_array[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        mul=mul*arr[i+1];
        prefix_array[i]=mul;
    }
    int prefix_array2[n];
    int mul2=1;
    for(int i=0;i<n;i++)
    {
        prefix_array2[i]=mul2;
        mul2=mul2*arr[i];
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int temp=prefix_array[i]*prefix_array2[i];
        ans.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    product_array(arr,n);
    return 0;

}

