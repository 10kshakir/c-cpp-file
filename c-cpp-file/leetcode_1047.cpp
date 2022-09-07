#include<iostream>
#include<stack>

using namespace std;

string remove_dup(string s)
{
    stack<char>st;
    int i =0;
    while(i<s.length())
    {
        if(st.empty()||st.top()!=s[i])
        {
            st.push(s[i]);
            i++;
        }
        else
        {
            st.pop();
            i++;
        }
    }
    string d = "";
    while(!st.empty())
    {
        d+=st.top();
        cout<<st.top()<<" ";
        st.pop();
    }
    return d;
}

int main()
{

    string st = "abbaca";
    st =remove_dup(st);
    cout<<st;
}
