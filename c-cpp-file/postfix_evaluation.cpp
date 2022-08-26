#include<iostream>
#include<string>
#include<cmath>
#include"MYSTACK.h"

using namespace std;
int postfix_evaluation(string st)
{
    Stack<int> k;
    for(int i =0;i<st.length();i++)
    {
        if(st[i]>='0'&&st[i]<='9')
        {
            k.push(st[i]-'0');
        }
        else
        {
            int b =k.pop();
            int a =k.pop();
            switch(st[i])
            {
            case '+':
                k.push(a+b);
                break;
            case '-':
                k.push(a-b);
                break;
            case '*':
                k.push(a*b);
                break;
            case '/':
                k.push(a/b);
                break;
            case '^':
                k.push(pow(a,b));
                break;
            default:
                break;

            }
        }
    }
    return k.pop();
}

int main()
{
    string st;
    cin>>st;
    cout<<postfix_evaluation(st);
    return 0;
}
