#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[7];
    scanf("%d",&n);
    for(int i=0;i<7;i++)scanf("%d",&a[i]);
    int c,b=0;
    while(n>0)
    {
        for(int i=0;i<7;i++)
        {
            n-=a[i];
            c=i;
            if(n<=0)
                break;
        }
    }
    printf("%d\n",c+1);
}
