#include <iostream>
#include <algorithm>

using namespace std;

int BinarySearch(int a[],int x,int lb,int hb)
{
    while(lb<=hb)
    {
        int mid =(lb+hb)/2;
        cout<<"mid "<<mid<<endl;
        //mid case
        if(x==a[mid] )
        {
            return mid;
        }

        //x>a[mid]
        else if(x>a[mid])
        {
            lb =mid+1;
            cout<<"lb "<<lb<<"  hb "<<hb<<endl;
        }

        //x<a[mid]
        else{
           hb= mid-1;
            cout<<"lb "<<lb<<"  hb "<<hb<<endl;
        }
    }
     return -1;
}

int main()
{
    int size,check_value ;
    cin>>size>>check_value ;


    int a[size];

    for(int i =0;i<size;i++)
    {
        cin>>a[i];  //1 2 4 9 12 14 16 21 32 35


    }



  sort(a,a+size);


    int index=BinarySearch(a,check_value,0,size-1);

//    if(index!=-1)
//    {
//        cout<<"Index : "<<index<<" position : "<<index+1;
//    }
//    else
//    {
//        cout<<"Not found in the array"<<endl;
//    }

    return 0;
}
