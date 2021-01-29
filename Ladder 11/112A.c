#include<stdio.h>
#include<string.h>
int main()
{
    char a[104],b[104];
    scanf("%s %s",&a,&b);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
            a[i]=a[i]-'A'+'a';
        if(b[i]>=65 && b[i]<=90)
            b[i]=b[i]-'A'+'a';
    }
    int out=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]<b[i])
        {
            out=-1;
            break;
        }

        else if(a[i]>b[i])
        {
            out=1;
            break;
        }
    }
    printf("%d\n",out);
    return 0;
}
