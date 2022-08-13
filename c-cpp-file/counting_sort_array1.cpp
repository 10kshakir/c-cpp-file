#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    // finding maximum in an array
    int maximum =a[0];
    for(int i =0;i<n;i++)
    {
        maximum=max(maximum,a[i]);
    }

    //make frequency array

    int *count=new int[maximum+1]{0};
    for(int i =0;i<n;i++)
    {
        count[a[i]]++;
    }

    //cumulative count

    for(int i =1;i<=maximum;i++)
    {
        count[i]+=count[i-1];
    }
    //final array
    int final_array[n];
    for(int i =n-1;i>=0;i--)
    {
        count[a[i]]--;
        int k =count[a[i]];
        final_array[k]=a[i];
    }

    for(int i =0;i<n;i++)
    {
        cout<<final_array[i]<<" ";
    }
    return 0;
}
