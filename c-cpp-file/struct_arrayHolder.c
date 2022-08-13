#include <stdio.h>
struct arrayHolder{
    int array[100];
};
struct arrayHolder make_n_array(int n)
{
        struct arrayHolder arr;
        for(int i =0;i<n;i++)
        {
            arr.array[i]=i+2;
        }
        return arr;
}

int main()
{
    int n =10;
    struct arrayHolder a=make_n_array(n);
    for(int i =0;i<n;i++)
    {
        printf("%d ",a.array[i]);
    }
    return 0;
}
