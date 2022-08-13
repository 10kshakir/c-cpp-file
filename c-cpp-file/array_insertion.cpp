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

    int value;
    cout<<"Enter value: ";
    cin>>value;

    if(pos<0||pos>size)
    {
        cout<<"Invalid index";
    }
    else
    {
//        for(int i =size;i>=pos;i--)
//        {
//            a[i]=a[i-1];
//        }
//        a[pos]=value;

//        for(int i =size-1;i>=pos ;i++)
//        {
//            a[i+1]=a[i];
//        }
//         a[pos]=value;

        a[size]=a[pos];
        a[pos]=value;
    }
     cout<<"Array after insertion: ";
    print_array(a,size+1);
    return 0;
}
