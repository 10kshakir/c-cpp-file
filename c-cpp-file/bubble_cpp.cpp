#include <iostream>

using namespace std;



void print_array(int a[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

//bubble sort implementation
void bubble_sort(int a[],int n)
{
    for(int i =1;i<n;i++)
    {

        int flag =0;
        for(int j =0;j<n-i;j++)
        {


            print_array(a,n);

            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }





        }

        if(flag==0) break;
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


    bubble_sort(a,size);

   print_array(a,size);

    return 0;
}
