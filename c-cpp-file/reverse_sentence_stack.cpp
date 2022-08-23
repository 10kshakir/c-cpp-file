#include <iostream>
#include <string>
#include"MYSTACK.h"

using namespace std;

void reverse_string(string str)
{
    Stack <string>st;
    string w;
    for(int i =str.length()-1;i>=0;i--)
    {
        w="";
        if(i!=str.length()-1)
        {
            st.push(".");
        }
        while(i>=0&&str[i]!='.')
        {
            w+=str[i];
             i--;


        }


        st.push(w);
    }

    while(!st.check_empty())
    {
        cout<<st.pop();
    }
}


int main()
{
    string st;
    cin>>st;
    reverse_string(st);
    return 0;
}
