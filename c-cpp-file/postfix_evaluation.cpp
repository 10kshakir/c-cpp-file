#include<iostream>
#include<string>
#include<cmath>
#include<stack>

using namespace std;
void print_stack(stack<int> ch)
{
    while(!ch.empty())
    {
        cout<<ch.top()<<" ";
        ch.pop();
    }
    cout<<endl;
}
int postfix_evaluation(string st)
{
    stack<int> k;
     stack<int>st1;
    for(int i =0;i<st.length();i++)
    {
        if(st[i]>='0'&&st[i]<='9')
        {
            k.push(st[i]-'0');
        }
        else
        {
            int b =k.top();
            k.pop();
            int a =k.top();
            k.pop();
            switch(st[i])
            {
            case '+':
                k.push(a+b);
                st1=k;
                print_stack(st1);
                break;
            case '-':
                k.push(a-b);
                st1=k;
                print_stack(st1);
                break;
            case '*':
                k.push(a*b);
                st1=k;
                print_stack(st1);
                break;
            case '/':
                k.push(a/b);
                st1=k;
                print_stack(st1);
                break;
            case '^':
                k.push(pow(a,b));
                st1=k;
                print_stack(st1);
                break;
            default:
                break;

            }
        }
    }
    st1=k;
    print_stack(st1);
    return k.top();
}
//562^726/-+*781+*54*+-
int main()
{
    string st;
    cin>>st;
    cout<<postfix_evaluation(st);
    return 0;
}
