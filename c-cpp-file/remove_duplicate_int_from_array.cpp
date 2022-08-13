#include <iostream>
#include <conio.h>
using namespace std;

void  remove_duplicant_from_array(int a[],int *n)
{
    int d =*n;
     for(int i =0;i<d-1;i++)
    {
        for(int j =i+1;j<d;j++)
        {
            if(a[i]==a[j])
            {
                for(int k =j+1;k<d;k++)
                {
                    a[j]=a[k];

                }
                j--;
                d--;
            }
        }
    }
     *n =d;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    remove_duplicant_from_array(a,&n);

    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    getchar();
    return 0;
}
