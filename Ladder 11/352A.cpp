#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1004],zero=0;
    scanf("%d",&n);
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            zero++;
    }
    int five=n-zero;
    int fv=0;
    for(int i=five;i>=1;i--)
    {
        if((5*i)%9==0)
        {
            fv=i;
            break;
        }
    }
    if(zero==0)
        printf("-1\n");
    else if(fv==0)
        printf("0\n");
    else{
        while(fv--)
            printf("5");
        while(zero--)
            printf("0");
        printf("\n");
    }
}
