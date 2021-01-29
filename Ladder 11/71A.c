#include<stdio.h>
#include<string.h>
int main()
{
    char s[104];
    int n;
    scanf("%d",&n);
    while(n--){
    scanf("%s",&s);
    int ln=strlen(s);
    if(ln<=10)
        printf("%s\n",s);
    else
        printf("%c%d%c\n",s[0],ln-2,s[ln-1]);
    }
    return 0;
}

