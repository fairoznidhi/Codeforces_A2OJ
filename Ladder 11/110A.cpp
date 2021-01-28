#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    cin>>a;
    int c=0;
    bool paisi=true,four=false,seven=false;
    while(a!=0)
    {
        int md=a%10;
        if(md==4||md==7)
        {
            c++;
        }
        a/=10;
    }
    if(c==4||c==7)
        printf("YES\n");
    else printf("NO\n");
}
