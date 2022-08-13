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


    if(pos<0||pos>size-1)
    {
        cout<<"Invalid index";
    }
    else
    {
        if(pos ==size-1) size--;
        else{

            for(int i =pos;i<size;i++)
            {
                a[i]=a[i+1];
            }
            size--;
        }
    }
    cout<<"Array after deletion : ";
    print_array(a,size);

    return 0;
}
