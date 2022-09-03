#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int pre[n];
    pre[0]=a[0];
    for(int i =1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    for(int i =0;i<n;i++)cout<<pre[i]<<" ";
    cout<<endl;
    for(int i =0;i<n;i++)
    {
        if(pre[i]==0)continue;
        for(int j =i+1;j<n;j++)
        {
            if(pre[j]==0)
            {
                pre[i]=0;
                break;
            }
            if(pre[i]==pre[j])
            {
                pre[j]=0;
                break;
            }
        }
    }

    for(int i =0;i<n;i++)cout<<pre[i]<<" ";
    return 0;
}
