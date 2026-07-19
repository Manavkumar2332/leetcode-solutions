#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
int rev;
    while(n!=0)
    {
         rev=n;
        n=n/10;
       
        rev=rev % 10;
        cout<<rev;
    }
}

/* According to leetcode 

class Solution {
public:
    int reverseNumber(int n) {
     int rev;
     int result=0;
     while(n!=0)
     {
        rev=n;
        n=n/10;
        rev=rev%10;
        result=(result*10) + rev;
        
     }
     return result;
    }
};

*/