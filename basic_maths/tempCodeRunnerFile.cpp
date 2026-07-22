#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2,50,6,9,10,20};
    int smallest=nums[0];
    int largest;
    
    for(int i=0;i<nums.size();i++)
    {
        for(int j=1;j<nums.size();j++)
        {
          if(smallest<nums[j])
          {
            smallest=nums[i];
          }
          else{
            largest= nums[i];

          }
        }
    }
    cout<<smallest<<endl;
    cout<<largest;

}