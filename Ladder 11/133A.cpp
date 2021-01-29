#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[104];
    scanf("%s",s);
    bool paisi=false;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            paisi=true;
            break;
        }
    }
    if(paisi)
        printf("YES\n");
    else
        printf("NO\n");
}
