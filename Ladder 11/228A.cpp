#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[4],cnt=0;
    for(int i=0;i<4;i++)scanf("%d",&s[i]);
    sort(s,s+4);
    for(int i=0;i<3;i++)
    {
        if(s[i]==s[i+1])
            cnt++;
    }
    printf("%d\n",cnt);
}
