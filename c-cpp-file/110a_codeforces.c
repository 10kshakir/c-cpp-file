#include <stdio.h>
int main()
{

    long long int a,x;
	int y=0;
	scanf("%lld",&a);
	while(a)
	{x=a%10;
	if(x==4 || x==7)
		y++;
	 a=a/10;
	}
	if(y==4||y==47||y==74||y==44||y==7)
		printf("YES");
	else
		printf("NO");
    return 0;
}
