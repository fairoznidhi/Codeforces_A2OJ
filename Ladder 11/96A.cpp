#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char s[104];
    bool dang=false;
    scanf("%s",&s);
    int ln=strlen(s);
    int sump=0,summ=0;
    for(int i=0;i<ln;i++){
        if(s[i]=='0'){
            summ=0;
            sump++;
            if(sump==7){
                dang=true;;
            }
        }
        else if(s[i]=='1'){
            sump=0;
            summ++;
            if(summ==7){
                dang=true;
            }
        }
    }
    if(dang)
     printf("YES\n");
    else
      printf("NO\n");
      return 0;
}