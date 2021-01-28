#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)printf("-1\n");
    else
    {
        printf("2");
        for(int i=2;i<=n;i++)
        {
            if(i%2!=0)
                printf(" %d",i+1);
            else
                printf(" %d",i-1);
        }
        printf("\n");
    }
}
