#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       string st;
        cin>>st;
        int first=-1 ,last=-1;
        bool t =false;
        int l =0;
        int j =st.length();
        while(st[l]!='1')
        {
            l++;
        }
        while(st[j]!='1')
        {
            j--;
        }
        int count =0;
        for(int m =0;m<st.length();m++)
        {
            if(st[m]=='0')count++;
        }

        for(int k =l;k<=j;k++)
        {
            if(st[k]=='0')
                {
                   t=true;
                }
            if(t==true) break;
        }
        if(t==true||count==st.length())
        {
            cout<<"NO"<<endl;

        }else{

           cout<<"YES"<<endl;
        }
    }
    return 0;
}
