#include <cmath>
#include <cstdio>
#include <vector>
#include<stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i =0;i<n;i++)cin>>a[i];
        stack<char>st;
        string s ="";
        st.push(a[0]);
        for(int i =1;i<n;i++)
        {
            if(st.empty())st.push(a[i]);
            else if(st.top()==a[i])st.pop();
            else if((a[i]=='R'&&st.top()=='B') || (a[i]=='B'&&st.top()=='R'))
            {
                st.pop();
                if(!st.empty())
                {
                    if(st.top()=='P')
                    {
                        st.pop();
                    }else
                    {
                        st.push('P');
                    }
                }
                else
                    {
                        st.push('P');
                    }
            }else if((a[i]=='R'&&st.top()=='G') || (a[i]=='G'&&st.top()=='R'))
            {

                st.pop();
                if(!st.empty())
                {
                    if(st.top()=='Y')
                    {
                        st.pop();
                    }else
                    {
                        st.push('Y');
                    }
                }
                else
                    {
                        st.push('Y');
                    }
            }else if((a[i]=='G'&&st.top()=='B') || (a[i]=='B'&&st.top()=='G'))
            {

               st.pop();
                if(!st.empty())
                {
                    if(st.top()=='C')
                    {
                        st.pop();
                    }else
                    {
                        st.push('C');
                    }
                }
                else
                    {
                        st.push('C');
                    }
            }else{
                st.push(a[i]);
            }
        }
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;

    }

    return 0;
}

