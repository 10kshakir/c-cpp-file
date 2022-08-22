#include <iostream>

using namespace std;

template <typename T>

T my_max (T a,T b)
{
    return (a>b)?a:b;
}

int main()
{
    cout<<my_max<char>('a','f');

    return 0;
}
