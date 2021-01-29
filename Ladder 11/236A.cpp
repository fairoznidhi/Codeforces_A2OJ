#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[104];
    scanf("%s",&s);
    int ln=strlen(s);
    int act=0;
    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[i]==s[j]&&i!=j&& s[i]>=97 &&s[i]<=122)
            {
                s[i]='0';
            }
        }
        if(s[i]=='0')
            act++;
    }
    if((ln-act)%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
