#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int char_hash[25];
    for(int i=0;i<n;i++)
    {
        char_hash[(s[i]-'a')]++;
    }
    char q;
    cin>>q;
    cout<<char_hash[q-'a']<<endl;
    return 0;
}