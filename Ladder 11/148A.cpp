#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,t[100004],sum=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    for(int i=1;i<=d;i++)
    {
        if(i%k==0&& i>=k)
            t[i]=1;
        else if(i%l==0 && i>=l)
            t[i]=1;
        else if(i%m==0 && i>=m)
            t[i]=1;
        else if(i%n==0 && i>=n)
            t[i]=1;
        else
            t[i]=0;
    }
    for(int i=1;i<=d;i++)
    {
        if(t[i]==1)
        sum++;
    }
    printf("%d\n",sum);
}
