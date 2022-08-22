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
    int a[50];
    int size;
    cin>>size;

    for(int i =0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Given Array: ";
    print_array(a,size);

    int pos;
    cout<<"Enter position: ";
    cin>>pos;


    deletion_array(a,&size,pos);

    cout<<"Array after deletion : ";
    print_array(a,size);

    return 0;
}
