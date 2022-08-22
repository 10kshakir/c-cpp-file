#include <iostream>

using namespace std;

void print_array(int a[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void deletion_array(int a[],int *n,int pos)
{
    int d =*n;
    for(int i =pos;i<d ;i++)
    {
        a[i]=a[i+1];

    }
    d--;
    *n=d;

}

int main()
{

    int n,n1;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)cin>>a[i];

    cin>>n1;
    int b[n];
    for(int i =0;i<n1;i++)cin>>b[i];

    for(int i =0;i<n1;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                deletion_array(a,&n,j);
            }
        }
    }
    cout<<endl;
    print_array(a,n);

    return 0;
}
