#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    int len =n;
    char ch[len];
    scanf("%s",ch);



    for(int i =0;i<len;i++){
        ch[i]=toupper(ch[i]);
    }
    int temp;
    for (int i = 0; i < len; i++) {
		for (int j = i+1; j < len; j++) {
			if (ch[i] > ch[j]) {
					temp = ch[i];
					ch[i] = ch[j];
					ch[j] = temp;
			}
		}
	}
	for(int i = 0; i < len; i++)
  	{
  		for(int j = i + 1; ch[j] != '\0'; )
  		{
  			if(ch[j] == ch[i])
			{
  				for(int k = j; ch[k] != '\0'; k++)
				{
					ch[k] = ch[k + 1];
				}
 			}
 			else{
                j++;
 			}
		}
	}
    int sum =0;
    for(int i =0;i<len;i++)
    {
        sum+=ch[i];
    }

    if(sum==2015)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
