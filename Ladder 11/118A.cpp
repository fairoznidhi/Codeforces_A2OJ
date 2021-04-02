#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[104];
    scanf("%s",&s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]-'A'+'a';
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
            printf(".%c",s[i]);
    }
    printf("\n");
}
