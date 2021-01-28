#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l[10004],r[10004],lt=0,rt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&r[i]);
        if(l[i]==1)
            lt++;
        if(r[i]==1)
            rt++;
    }
    if(n-lt<lt)
        lt=n-lt;
    if(n-rt<rt)
        rt=n-rt;
    printf("%d\n",lt+rt);
}
