#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d=0;
    scanf("%d %d",&n,&m);
    bool paisi=true;
    for(int i=n;i<=m;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)d++;
        if(c==2 && i!=m && i!=n)
            paisi=false;
    }
    if(paisi && d==2)
        printf("YES\n");
    else
        printf("NO\n");
}
