#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[104],t[104];
    scanf("%s %s",s,t);
    int sl=strlen(s);
    int tl=strlen(t);
    bool paisi=true;
    if(sl!=tl)
        paisi=false;
    else{
        for(int i=0,j=sl-1;i<tl;i++,j--){
            if(s[i]!=t[j])
                paisi=false;
        }
    }
    if(paisi)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
