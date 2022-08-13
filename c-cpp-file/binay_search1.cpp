#include <iostream>

using namespace std;

int binary_searc(int a[],int x,int lb,int hb)
{
    if(lb<=hb)
    {
        int mid =(lb+hb)/2;

        //mid
        if(x ==a[mid]) return mid;

        //x>a[mid]
        else if(x>a[mid]) return binary_searc(a,x,mid+1,hb);

        //x<a[mid]
        else return binary_searc(a,x,lb,mid-1);
    }
    else return -1;
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element : ";
    int x;
    cin>>x;

    int ind =binary_searc(a,x,0,n-1);

    if(ind!=-1)
    {
        cout<<" Index : "<<ind<<" ,position : "<<ind+1;
    }else{
        cout<<"not found"<<endl;
    }


    return 0;


}
