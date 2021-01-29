#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int drinks=k*l/nl;
    int lime=c*d;
    int salt=p/np;
    if(drinks<=lime)
    {
        if(salt<=drinks)
            printf("%d\n",salt/n);
        else
            printf("%d\n",drinks/n);
    }
    else
    {
        if(salt<=lime)
            printf("%d\n",salt/n);
        else
            printf("%d\n",lime/n);
    }
}
