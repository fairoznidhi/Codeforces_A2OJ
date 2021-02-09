#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[1005],mx=1,ind=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=mx)
        {
            ind=i;
            mx=a[i];
        }
    }
    int div=mx/m;
    if(mx%m==0)
        div--;
    div*=m;
    int cnt=0;
    for(int i=div+1;i<=mx;i++)
    {
        for(int j=n-1;j>=ind;j--)
        {
            if(i==a[j])
            {
                ind=j;
                cnt++;
            }
        }
    }
    if(mx>m)
        printf("%d\n",ind+1);
    else
        printf("%d\n",n);
}
