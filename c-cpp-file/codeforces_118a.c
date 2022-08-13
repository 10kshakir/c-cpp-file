#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[101];
    char k[101];
    char l[202];
    scanf("%s",str);
    for(int i =0;i<strlen(str);i++)
    {
        str[i]=tolower(str[i]);
    }
    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            str[i]=str[i+1];
        }
    }
    for(int i = 0; i < strlen(str); i++)
  	{
  		for(int j = i + 1; str[j] != '\0';j++ )
  		{
  			if(str[j] == str[i])
			{
  				for(int k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}

		}
	}

    for(int i =0;i<strlen(str);i++)
    {
        k[i]='.';
    }
    int count =0;
    for(int i =0;i<strlen(str)*2;i=i+2)
    {
        l[i]='.';


    }
    printf("%s",l);
    return 0;
}
