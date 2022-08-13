#include <iostream>
using namespace std;
void selection_sort(int *a,int n)
{
    for(int i =0;i<n-1;i++)
    {
        int pos =i;
        for(int j =i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            {
                pos =j;
            }
        }
        if(pos!=i)
        {
            swap(a[i],a[pos]);
        }
    }
}

using namespace std;
int main()
{
    int a[]={2,3,1,5,6};
    selection_sort(a,5);
    for(int i =0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int n =5;
    int m =6;
    swap(n,m);
    cout<<n<<" "<<m;
    return 0;
}
