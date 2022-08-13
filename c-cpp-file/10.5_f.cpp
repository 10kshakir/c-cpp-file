#include <iostream>

using namespace std;

int main()
{
    int n1;
    cin>>n1;
    int a[n1];

    for(int i =0;i<n1;i++)
    {
        cin>>a[i];
    }


    int n2;
    cin>>n2;
    int b[n2];

    for(int i =0;i<n2;i++)
    {
        cin>>b[i];
    }

    int ind =0;

    for(int i =0;i<n1;i++)
    {
        int ele =a[i];
        for(int j =0;j<n2;j++)
        {
            if(ele ==b[j])
            {
                ind++;
            }
        }
    }

    int c[ind];
    int l =0;
    while(l<ind)
    {
        for(int i =0;i<n1;i++)
    {
        int ele =a[i];
        for(int j =0;j<n2;j++)
        {
            if(ele ==b[j])
            {
                c[l]=a[i];
                l++;

            }
        }
    }
    }

    if(ind!=0)
    {
        for(int i =0;i<ind;i++)
        {
            cout<<c[i]<<" ";
        }
    }else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}
