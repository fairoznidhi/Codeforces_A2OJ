#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int k,pabo=0;
    char s[1004];
    scanf("%d",&k);
    scanf("%s",&s);
    int ln=strlen(s);
    int a[26];
    for(int i=0;i<26;i++)a[i]=0;
    for(int i=0;i<ln;i++){
        int cal=s[i]-97;
        a[cal]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0 && a[i]%k!=0){
            pabo=-1;
            break;
        }
        if(a[i]!=0)a[i]/=k;
    }
    if(pabo==0){
        while(k--){
            for(int i=0;i<26;i++){
                if(a[i]!=0){
                    for(int j=1;j<=a[i];j++){
                        printf("%c",i+97);
                    }
                }
            }
        }
        printf("\n");
    }
    else printf("-1\n");
    return 0;
}