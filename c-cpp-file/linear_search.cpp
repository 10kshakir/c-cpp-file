#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;

    int a[size];

    for(int i =0;i<size;i++)
    {
        cin>>a[i];
    }

    int check_value;
    cout<<"Enter the value you want to check : ";
    cin>>check_value;

    int flag  =0;

    for(int i =0;i<size;i++)
    {
        if(a[i]==check_value)
        {
            cout<<"Index : "<<i<<" Position : "<<i+1<<endl;
            flag++;

        }
    }

    if(flag ==0)
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}
