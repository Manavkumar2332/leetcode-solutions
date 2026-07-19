#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int original=n;
    int rev;
    int result=0;
    while(n!=0)
    {
        rev=n;
        n=n/10;
        rev=rev%10;
        result = (result*10) +rev;

    }
  if(result==original)
  {
    cout<<"Palindrome";
  }
  else{
    cout<<"Not a Palindrome";
  }
}