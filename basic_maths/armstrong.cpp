#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int original =n;
    int rev;
    int result=0;

    while(n !=0)
    {
        rev=n;
        n=n/10;
         rev =rev%10;
        result += rev*rev*rev;
    }

    

    if(original == result)
    {
      cout<<"number is armstrong";
    }
    else{
        cout<<"number is not an armstrong";
    }
    
    
}