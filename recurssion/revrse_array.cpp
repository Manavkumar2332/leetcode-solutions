#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int i)
{
    if(i== -1)
    {
        return 0;
    }

     cout<<arr[i];
    fun(arr,i-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    fun(arr,4);
}