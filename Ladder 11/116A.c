#include<stdio.h>
int main()
{
    int n,a[1004],b[1004];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d %d",&a[i],&b[i]);
    int mx=b[0];
    for(int i=1;i<n-1;i++)
    {
        b[i]=b[i-1]-a[i]+b[i];
        if(b[i]>mx)
            mx=b[i];
    }
    printf("%d\n",mx);
    return 0;
}
