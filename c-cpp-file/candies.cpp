#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int T;
    cin>>T;
    while(T--)
    {
        int n,c;
        cin>>n>>c;
        int a[n];
        int sum=0;
        for(int i =0;i<n;i++)cin>>a[i];

        for(int i =0;i<n;i++)
        {
            int ele =a[i]*2;
            sum+=ele;

        }
        if(sum>c)
            {
                cout<<"No"<<endl;

            }else
        cout<<"Yes"<<endl;
    }
    return 0;
}

