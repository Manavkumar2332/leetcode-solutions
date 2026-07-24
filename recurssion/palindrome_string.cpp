#include<bits/stdc++.h>
using namespace std;

string fun(string name,int i){
string result;


    if(i==-1)
    {
        return "";
    }
    
     result=name[i];

     
    
     return result+ fun(name,i-1);
    

}


int main()
{
    string name;
    cin>>name;
    int i=name.length()-1;
   string finall=  fun(name,i);
   string original = name;
   if(name==finall)
   {
    cout<<"Palindrome";
   }
   else{
    cout<<"Not a Palindrome";
   }
}