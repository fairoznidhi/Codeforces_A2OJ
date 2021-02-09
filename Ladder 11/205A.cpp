#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],mn=1000000002,ind=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=mn)
        {
            mn=a[i];
            ind=i;
        }
    }
    sort(a,a+n);
    if(a[0]==a[1])
        printf("Still Rozdil\n");
    else
        printf("%d\n",ind+1);
}
