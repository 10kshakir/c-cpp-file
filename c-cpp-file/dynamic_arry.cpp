#include <iostream>

using namespace std;
int main()
{
//    int *p =(int*)calloc(10,sizeof(int));
//    for(int i =0;i<10;i++)
//    {
//        cout<<p[i]<<" ";
//    }
//    free(p)
    int *ptr =new int[10]{2,3,4,5};
    for(int i =0;i<10;i++)
    {

        cout<<ptr[i]<<" ";
    }
    return 0;
}
