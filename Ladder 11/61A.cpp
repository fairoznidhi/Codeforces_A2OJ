#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[104],n[104],b[104];
    scanf("%s %s",&s,&n);
    int len=strlen(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=n[i])
            b[i]='1';
        else
            b[i]='0';
    }
    b[len]='\0';
    printf("%s\n",b);
}
