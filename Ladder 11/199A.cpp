#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[100005],i;
    a[0]=0;
    a[1]=1;
    for(i=1;a[i]<=n;i++)
    {
        a[i+1]=a[i]+a[i-1];
    }
    int c=i;
    i-=2;
    if(n==0)
        printf("0 0 0\n");
    else
        printf("0 %d %d\n",a[i-1],a[i]);
}
