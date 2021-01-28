#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[150];
    scanf("%s",&s);
    int one=0,two=0,three=0;
    for(int i=0;s[i]!='\0';i+=2)
    {
        if(s[i]=='1')
            one++;
        else if(s[i]=='2')
            two++;
        else
            three++;
    }
    int i=0;
    while(one--)
    {
        s[i]='1';
        i+=2;
    }
    while(two--)
    {
        s[i]='2';
        i+=2;
    }
    while(three--)
    {
        s[i]='3';
        i+=2;
    }
    printf("%s\n",s);
}
