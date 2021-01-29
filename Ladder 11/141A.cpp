#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char a[104],b[104],c[104];
    scanf("%s %s %s",&a,&b,&c);
    int asumb=strlen(a)+strlen(b);
    int csum=strlen(c);
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=0;c[j]!='\0';j++)
        {
            if(a[i]==c[j])
            {
                c[j]='1';
                break;
            }
        }
    }
    for(int i=0;b[i]!='\0';i++)
    {
        for(int j=0;c[j]!='\0';j++)
        {
            if(b[i]==c[j])
            {
                c[j]='1';
                break;
            }
        }
    }
    int cnt=0;
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]=='1')
            cnt++;
    }
    if(asumb==csum && csum==cnt)
        printf("YES\n");
    else
        printf("NO\n");
}
