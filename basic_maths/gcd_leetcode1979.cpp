#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {12,13,15,16,17,18};
    int n1=nums[0];
    int n2 = nums[0];
    int gcd=1;
    
    for(int i =0;i<nums.size();i++)
    {
        if(n1>nums[i]) // aise soch n1 se badha dekho is nums vector mai or mil jaye tho usko n1 mai daldena 
        {
            n1=nums[i];
        }
       
        if(n2<nums[i]) // n2 se badha ho nums mai tho n2 mai dal dena
        {
            n2 = nums[i];
        }
        
    }
 
for(int i=1;i<min(n1,n2);i++) // gcd nikaldiya 
{
    if(n1%i==0 && n2%i==0)
    {
     gcd=i;
    }
}

cout<<gcd;
}