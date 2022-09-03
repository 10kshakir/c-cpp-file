#include<iostream>
#include<vector>

using namespace std;

void print_vector(vector<int> v)
{
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>a;
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);

    print_vector(a);


    return 0;
}
