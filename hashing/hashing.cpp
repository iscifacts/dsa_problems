#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int freq[1000000]={0};
    for(int i=0;i<n;i++)
    {
         freq[arr[i]]++;
    }
    int q;
    cin>>q;
    cout<<freq[q]<<endl;
    return 0;
}