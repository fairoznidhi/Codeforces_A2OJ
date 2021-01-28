#include<stdio.h>
int main()
{
    int n,t;
    char a[100000];
    scanf("%d %d",&n,&t);
    scanf("%s",a);
    for(int T=0;T<t;T++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                a[i]='G';
                a[i+1]='B';
                i++;
            }
        }
    }
    printf("%s\n",a);
    return 0;
}

