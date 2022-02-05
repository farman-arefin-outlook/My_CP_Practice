
//reverse word

#include<bits/stdc++.h>

using namespace std;

void reverse_string(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=' ')
        {
            st.push(s[i]);
        }
        else
        {
            while(st.empty()==false)
            {
                cout<<st.top();
                st.pop();
            }
            cout<<' ';
        }
    }
    while(st.empty()==false)
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    string s;
    getline(cin,s);
    reverse_string(s);
    }
    return 0;
}
