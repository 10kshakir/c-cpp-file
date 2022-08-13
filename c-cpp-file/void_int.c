#include <stdio.h>
void makePositive(int* a) {
	if (*a < 0) {
		*a = -*a;
	}
	}

int main()
{
    int a =-10;
    makePositive(&a);
    printf("%d",a);
    return 0;
}
