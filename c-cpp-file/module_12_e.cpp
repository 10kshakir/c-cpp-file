#include <iostream>

using namespace std;

int main()
{
    int d;
    cin>>d;
    while(d--)
    {
        cout<<"Case "<<d+1<<":"<<endl;
        int n,op;
        cin>>n>>op;
        int ar[n];
        for(int i =0;i<n;i++ )
        {
            cin>>ar[i];
        }
        for(int j =0;j<op;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                int b;
                cin>>b;

                cout<<ar[b]<<endl;
                ar[b]=0;
            }else if(a==2)
            {
                int b,c;
                cin>>b>>c;
                ar[b]=ar[b]+c;

            }else{
                int b,c,sum=0;
                cin>>b>>c;
                for(int i =b;i<=c;i++)
                {
                    sum+=ar[i];
                }
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}

