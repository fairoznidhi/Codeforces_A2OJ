#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[204],b[204];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d %d",&a[i],&b[i]);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        bool rt=false,lt=false,up=false,lw=false;
        for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;
            if(a[j]>a[i]&&b[j]==b[i])
                rt=true;
            if(a[j]<a[i]&&b[j]==b[i])
                lt=true;
            if(a[j]==a[i]&&b[j]<b[i])
                lw=true;
            if(a[j]==a[i]&&b[j]>b[i])
                up=true;
            if(rt&&lt&&lw&&up)
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d\n",cnt);
}
