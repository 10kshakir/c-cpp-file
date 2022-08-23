#include<iostream>

using namespace std;

long long int dec_to_binary(int n)
{
    long long int binary =0;
    int i =1;
    while(n!=0)
    {
        int rem = n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        long long int d =dec_to_binary(i);
        cout<<d<<" ";
    }

    return 0;
}
