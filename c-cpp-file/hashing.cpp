#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<int ,int> m;
    m[1]=8;
    m[2]=9;
    m[3]=10;

    for(auto i:m)
    {
        cout<<i.first<< " "<<i.second<<endl;
    }
    return 0;
}
