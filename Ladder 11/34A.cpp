#include<bits/stdc++.h>
int main(){
    int n,a[104];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int ans=10005,x,y;
    for(int i=1;i<n;i++){
        if(ans>abs(a[i-1]-a[i])){
            ans=abs(a[i-1]-a[i]);
            x=i-1;
            y=i;
        }
    }
    if(ans>abs(a[n-1]-a[0])){
        ans=abs(a[n-1]-a[0]);
        x=n-1;
        y=0;
    }
    printf("%d %d\n",x+1,y+1);
}
