/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

you may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

//name-Ishita Agrawal 
//question no. 1
#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]+nums[j]==target)){
                    
                 ans.push_back(i);
                    ans.push_back(j);
                }
            }
                if(ans.size()==2)
                break;
            }
        
        return ans;
    }
};