#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[104];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int mx=0,mn=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[mx])
            mx=i;
        if(a[i]<=a[mn])
            mn=i;
    }
    if(mx>mn)
        printf("%d\n",mx+n-1-mn-1);
    else if(mn>mx)
        printf("%d\n",mx+n-1-mn);
}
