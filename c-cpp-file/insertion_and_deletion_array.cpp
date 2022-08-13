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

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

//    cout<<"Enter insertion element : ";
//    int value;
//    cin>>value;


    cout<<"Enter index you want to put : ";
    int ind;
    cin>>ind;
    // insertion
//    if(ind<0||ind>n)
//    {
//        cout<<"invalid index"<<endl;
//
//    }else
//    {
////        for(int i =n-1;i>=ind;i--)
////        {
////            a[i+1]=a[i];
////        }
////        a[ind]=value;
//
////        for(int i =n;i>=ind;i--)
////        {
////            a[i]=a[i-1];
////        }
////        a[ind]=value;
//
//        a[n]=a[ind];
//        a[ind]=value;
//
//    }

    //deletion

    if(ind<0||ind>n-1)
    {
        cout<<"invalid index"<<endl;
    }
    else
    {
        for(int i =ind+1;i<n;i++)
        {
            a[i-1]=a[i];
        }
        n--;
    }
    print_array(a,n);

    return 0;
}
