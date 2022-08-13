#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

    char  text[]=("heidi");
    char str[1001];
    scanf("%s",str);
    bool fake=false;
    int indx=0;
    for(int i  = 0; i < strlen(str); i++){
        if(str[i] == text[indx])indx++;
        if(indx >= strlen(text))
        {
            fake = true;
            break;
        }
    }

    if(fake ==true)
    {
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
