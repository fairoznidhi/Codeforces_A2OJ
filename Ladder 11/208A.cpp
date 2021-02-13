#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char s[204];
    scanf("%s",&s);
    int ln=strlen(s);
    int i=0,c=0;
    while(i<ln){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            c++;
            s[i]='0';
            s[i+1]='0';
            s[i+2]='0';
            if(i!=0 && c==1){
                printf(" ");
            }
            i+=2;
        }
        else{
            printf("%c",s[i]);
            c=0;
        }
        i++;
    }
    printf("\n");
}