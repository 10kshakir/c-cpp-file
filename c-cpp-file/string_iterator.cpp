#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st="abcdefghi";

    for(string:: iterator it =st.begin();it!=st.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
