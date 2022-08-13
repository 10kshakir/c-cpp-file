#include <iostream>
using namespace std;

int Binary_search(int a[],int x,int lb,int hb)
{
    if(lb<=hb)
    {

        int mid =(hb+lb)/2;

        // if x in the mid
        if(a[mid]==x) return mid;

        // if x>a[mid]

        else if(x>a[mid]) return Binary_search(a,x,mid+1,hb);

        //if x<a[mid]

        else return Binary_search(a,x,lb,mid-1);
    }
    else return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

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
    int size;
    cin>>size;

    int a[size];

    for(int i =0;i<size;i++)
    {
        cin>>a[i];
    }


    int x;
    cin>>x;
    int d =binarySearch(a,x,0,size-1);


   if(d!=-1)
   {
       cout<<"x index is "<<d+1<<endl;
   }else{
        cout<<"Not Found"<<endl;
   }


    return 0;
}
