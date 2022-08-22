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
int main()
{

    int n;
    cin>>n;


    for(int l =0;l<n;l++)
    {
        int d;
        cin>>d;
        int a[d];
        int b[d];
        for(int i =0;i<d;i++)cin>>a[i];
        for(int i =0;i<d;i++)cin>>b[i];

        int q;
        cin>>q;
        int upset_meter[q];
        int i=0;
        int sum =0;
        while(i<q)
        {
            int w;
            cin>>w;
            w++;
            int sum =0;
            int sum1 =0;

            for(int i =0;i<w;i++)
            {
                sum+=a[i];
            }

            for(int i =0;i<w;i++)
            {
                sum1+=b[i];
            }



            if(sum1>sum)sum1=0;
            else sum1 =1;
            upset_meter[i]=sum1;
            i++;
        }
        print_array(upset_meter,q);

    }
    return 0;
}
