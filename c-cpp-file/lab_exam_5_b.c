#include <stdio.h>
int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
    }
    return cnt;
}
int main()
{
    int b[5]={1,2,1,2,1};
    int a =f(5,b);
    printf("%d",a);
    return 0;
}

