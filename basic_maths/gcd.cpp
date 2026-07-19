#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    int n2;
    vector<int> arr1;
    vector<int> arr2;
    cin>>n1>>n2;
    vector<int> result;


    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0)
        {
            arr1.push_back(i);
            
        }
    }


    for(int i=1;i<=n2;i++)
    {
        if(n2%i==0)
        {
            arr2.push_back(i);
            
        }
    }

for(int i=0;i<arr1.size();i++)
{
    for(int j=0;j<arr2.size();j++)
    {
        if(arr1[i]==arr2[j])
        {
          result.push_back(arr1[i]);
        }
    }
}


cout<<result.back();

 

// for(int i=0;i<result.size();i++)
// {
//     for(int j=1;j<result.size();j++)
//     {
//         if(result[i]>result[j])
//         {
//             cout<<result[i];
//         }
//         else{
//             cout<<result[j];
//         }
//     }
// }

}