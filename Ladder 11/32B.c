#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],s[10000];
    int c=0;
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='-'&&a[i+1]=='.')
        {
            s[c]='1';
            c++;
            i++;
        }
        else if(a[i]=='-'&&a[i+1]=='-')
        {
            s[c]='2';
            c++;
            i++;
        }
        else if(a[i]=='.')
        {
            s[c]='0';
            c++;
        }
    }
    s[c]=='\0';
    printf("%s\n",s);
    return 0;
}


