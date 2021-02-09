#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[104],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    n++;
    int cnt=0;
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%n==1)
            cnt++;
    }
    printf("%d\n",5-cnt);
}
