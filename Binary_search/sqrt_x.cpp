//Name: Ishita agrawal
//link:https://www.geeksforgeeks.org/problems/square-root/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int s=0;
        long long int e=x;
        long long int mid=(s+e)/2;
        while(s<=e)
        {
            if(s*s==x)
            return s;
            else if(s*s>x)
            return s-1;
            else
            s++;
        }
        return 1;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}