#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;

    int a[size];

    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    int value ;
    cin>>value;

    int check=0;
    int ind =0;
    for(int i =0;i<size;i++)
    {
        if(a[i]==value)
        {
            ind=i;
            check++;

        }
    }
    if(check==0)
    {
        cout<<"NOT FOUND"<<endl;
    }else{
        cout<<"FOUND at index position: "<<value<<" ,"<<ind<<endl;
    }
    return 0;
}
