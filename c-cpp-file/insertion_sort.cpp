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


 //insertion sort implementation
void insertion_sort(int a[],int n)
{
    for(int i =1;i<n;i++)
    {
        int key =a[i];
        int j =i-1;
        cout<<i<<" step"<<endl;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            print_array(a,n);//5 1 3 4 2 2
        }
        a[j+1]=key;
        print_array(a,n);
        cout<<endl;
    }
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

    cout<<"Before sorting : ";
    print_array(a,size);


   insertion_sort(a,size);

//    cout<<"After sorting : ";
//    print_array(a,size);

    return 0;
}
