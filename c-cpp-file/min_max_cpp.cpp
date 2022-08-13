#include <iostream>

using namespace std;
int main()
{
//    int a,b,c,d;
//    cin>>a>>b>>c>>d;
//    int mn=min(a,min(b,min(c,d)));
    int a[]={6,4,7,4,7,2};
    int mn=a[0];
    for(int i =1;i<6;i++)
    {
        mn=min(mn,a[i]);
    }
    cout<<mn;
    return 0;
}
