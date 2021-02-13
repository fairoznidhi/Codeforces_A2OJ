#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,a[12],s=0,sum=0;
    scanf("%d",&k);
    for(int i=0;i<12;i++)scanf("%d",&a[i]);
    sort(a,a+12);
    for(int i=11;i>=0;i--){
        sum+=a[i];
        s+=1;
        if(sum>=k){
            break;
        }
    }
    if(sum<k)s=-1;
    if(k==0)s=0;
    printf("%d\n",s);
    return 0;
}