#include<stdio.h>
#include<string.h>
int main()
{
    char s[104];
    scanf("%s",s);
    int sln=strlen(s);
    int c=0;
    for(int i=0;i<sln;i++)
    {
        if(s[i]>=65&&s[i]<=90)
            c++;
    }
    if(c>sln-c)
    {
        for(int i=0;i<sln;i++)
        {
            if(s[i]>=97&&s[i]<=122)
                s[i]=s[i]-'a'+'A';
        }
    }
    else
    {
        for(int i=0;i<sln;i++)
        {
            if(s[i]>=65&&s[i]<=90)
                s[i]=s[i]-'A'+'a';
        }
    }
    printf("%s\n",s);
}
