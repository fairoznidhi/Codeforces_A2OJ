#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1004],mx,mn,bst=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    mx=a[0],mn=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            bst++;
        }
        if(a[i]<mn)
        {
            mn=a[i];
            bst++;
        }
    }
    printf("%d\n",bst);
}
