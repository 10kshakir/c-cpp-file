#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int>v(5,-1);

    for(auto it =v.begin();it!=v.end();it++)
    {

        cout<<*it<<" ";
    }
    v.push_back(5);
    cout<<endl;
    for(auto element: v)
    {
        cout<<element<<" ";
    }
    v.push_back(9);
    cout<<endl;
}
