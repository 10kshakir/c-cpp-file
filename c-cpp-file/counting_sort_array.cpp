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
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    //step 1
    int maximum =a[0];
    for(int i =1;i<n;i++)
    {
        maximum=max(maximum,a[i]);
    }

    //step 2
    int n1=maximum+1;
    int *count=new int[n1]{0};
    for(int i =0;i<n;i++)
    {
        count[a[i]]++;
    }
    cout<<endl<<"Frequency array : ";
    print_array(count,n1);
    //step 3

    for(int i =1;i<n1;i++)
    {
        count[i]+=count[i-1];
    }

    //step 4
    int *final_a=new int[n]{0};

    for(int i =n-1;i>=0;i--)
    {

        count[a[i]]--;
        cout<<endl<<"cumulative of Frequency array : ";
        print_array(count,n1);
        int k =count[a[i]];

        final_a[k]=a[i];           // 3 3 1 7 4 4 5

        cout<<endl<<"                  Final array : ";
        print_array(final_a,n);
    }

    for(int i =0;i<n;i++)
    {
        cout<<final_a[i]<<" ";
    }
    return 0;
}
