#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> st;
    
    st.insert(10);
    st.insert(20);
    st.insert(30);

    for(auto x : st)
    {
        cout<<x<<endl;
    }
}