#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
     long long int n;
    cin>>n;
     long long int node = pow(2,n-1);
     long long int sum =node/2;
    long long int d =(node*sum);
    if(n ==1)
    {
        cout<<1<<endl;
        return 0;
    }
    cout<<d<<endl;

    return 0;
}

