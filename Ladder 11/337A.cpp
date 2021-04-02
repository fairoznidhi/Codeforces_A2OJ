#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    int mn;
    int a[60];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<(n-s+1);i++){
        a[i]=abs(a[i+s-1]-a[i]);
        if(i==0)mn=a[i];
        else{
            if(a[i]<mn)mn=a[i];
        }
    }
    printf("%d\n",mn);
    return 0;
}