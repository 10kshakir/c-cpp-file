#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a = n/15;
    int bill = n*800;
    int ret = bill-(a*200);
    cout<<ret;
    return 0;
}

