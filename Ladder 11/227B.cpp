#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100004],b[100004],M,s,c;
    long long int r1=0,r2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        int j=a[i];
        b[j]=i;
    }
    scanf("%d",&M);
    for(int m=0;m<M;m++)
    {
        scanf("%d",&s);
        c=b[s];
        r1=r1+c+1;
        r2=r2+n-c;
    }
    printf("%I64d %I64d\n",r1,r2);
}
