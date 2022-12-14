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
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=key;

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
