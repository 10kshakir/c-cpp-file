#include <bits/stdc++.h>
using namespace std;
 
/* Function to print reverse of the passed string */
// void reverse(string str)
// {
//     if(str.size() == 0)
//     {
//         return;
//     }
//     reverse(str.substr(1));
//     cout << str[0];
// }
 
/* Driver program to test above function */
int main()
{
    string a = "Geeks for Geeks";
    cout<<a.substr(1)<<endl;
    cout<<a[0];
    return 0;
}