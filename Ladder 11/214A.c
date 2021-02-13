#include<stdio.h>
int main(){
    int n,m,c=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<=31;i++){
        for(int j=0;j<=31;j++){
            if((i*i+j)==n && (i+j*j)==m)
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}