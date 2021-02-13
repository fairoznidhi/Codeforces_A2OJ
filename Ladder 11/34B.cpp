#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[105],sum=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<m;i++){
        if(a[i]<=0)sum+=abs(a[i]);
    }
    printf("%d\n",sum);
}