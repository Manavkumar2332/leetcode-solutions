#include<iostream>
using namespace std;
int main()
{
    for(char ch = 'E'; ch>='A';ch--)
    {
        for(char j='A';j<=ch;j++)
        {
            cout<<j;
        }cout<<endl;
    }
}