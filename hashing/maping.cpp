#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>mpp; 
    //both are same but in unordered no sorting is done
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    cout<<mpp[q];
    return 0;
}