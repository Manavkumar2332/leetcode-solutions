#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    vector<int> v={1,2,3,5,1,2,1};
    int n;
    cin>>n;
    
    for(int i=0;i<v.size();i++)
    {
      if(v[i]==n)
      {
        count++;
      }
    }
    cout<<count;
}