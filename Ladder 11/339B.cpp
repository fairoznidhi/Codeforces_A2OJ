#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100005];
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)scanf("%d",&a[i]);
    long long int cnt=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]==a[i-1])
            continue;
        else if(a[i]<a[i-1]){
            cnt+=n-a[i-1]+a[i];
        }
        else{
            cnt+=a[i]-a[i-1];
        }
    }
    printf("%I64d\n",cnt);
    return 0;
}
