#include <iostream>
#include <algorithm>

using namespace std;

int BinarySearch(int a[],int x,int lb,int hb)
{
    if(lb<=hb)
    {
        int mid =(lb+hb)/2;
        //mid case
        if(x==a[mid] )
        {
            return mid;
        }

        //x>a[mid]
        else if(x>a[mid])
        {
            return BinarySearch(a,x,mid+1,hb);
        }

        //x<a[mid]
        else{
           return BinarySearch(a,x,lb,mid-1);
        }
    }
    else return -1;
}

int main()
{
    int size,check_value ;
    cin>>size>>check_value ;


    int a[size];

    for(int i =0;i<size;i++)
    {
        cin>>a[i];
    }



  sort(a,a+size);


    int index=BinarySearch(a,check_value,0,size-1);

    if(index!=-1)
    {
        cout<<"Index : "<<index<<" position : "<<index+1;
    }
    else
    {
        cout<<"Not found in the array"<<endl;
    }

    return 0;
}
