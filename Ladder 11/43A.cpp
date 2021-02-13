#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tm1=0,tm2=0;
    scanf("%d",&n);
    char s[11],t1[11],t2[11];
    for(int i=1;i<=n;i++){
        scanf("%s",s);
        if(i==1)
            strcpy(t1,s);
        if(i>=2 && strcmp(t1,s)!=0)
            strcpy(t2,s);
        if(strcmp(t1,s)!=0)
            tm2++;
        if(strcmp(t2,s)!=0)
            tm1++;
    }
    if(tm1>tm2)
        printf("%s\n",t1);
    else
        printf("%s\n",t2);
    return 0;
}
