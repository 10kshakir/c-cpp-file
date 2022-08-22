#include <iostream>
#include <string>
#include"MYSTACK.h"

using namespace std;

void reverse_string(string str)
{
    Stack <string> w;
    for(int i =0;i<str.length();i++)
    {
        string d ="";
        while(i<str.length()&&str[i]!=' ')
        {
            d+=str[i];
            i++;
        }
        w.push(d);
    }

    while(!w.check_empty())
    {
        cout<<w.pop()<<" ";

    }
}


int main()
{
    string st="I am Shakir";
    reverse_string(st);
    return 0;
}
