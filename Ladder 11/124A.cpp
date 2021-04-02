#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,x;
    scanf("%d %d %d",&n,&a,&b);
    if(a+b<n){
        x=n-b;
    }
    else{
        x=a+1;
    }
    printf("%d\n",n-x+1);
    return 0;
}