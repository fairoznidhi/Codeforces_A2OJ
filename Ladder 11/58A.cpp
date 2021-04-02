#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[104];
    scanf("%s",&s);
    int h1=104,e1=104,l1=104,l2=0,o1=104;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='h')
            h1=i;
        if(s[i]=='e' && i>h1)
            e1=i;
        if(s[i]=='l' && i>e1)
        {
            l2++;
            l1=i;
        }
        if(s[i]=='o'&&i>l1&& l2>=2)
            o1=1;

    }
    if(o1==1)
        printf("YES\n");
    else
        printf("NO\n");
}
