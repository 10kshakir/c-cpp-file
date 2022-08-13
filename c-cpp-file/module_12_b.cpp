#include <iostream>
#include <algorithm>

using namespace std;




int main()
{
    int n;
    cin>>n;
    for(int k =1;k<=n;k++)
    {
        cout<<"Case "<<k<<":"<<endl;
        int size,d;
        cin>>size>>d;
        int arr[size];
        for(int i =0;i<size;i++)
        {
            cin>>arr[i];
        }

        for(int i =0;i<d;i++)
        {
            int a,b;
            cin>>a>>b;
            a=a-1;
            b=b-1;
            int l =size-(b+a);

            cout<<endl<<minimum<<a<<b<<endl;


        }
    }
    return 0;
}
