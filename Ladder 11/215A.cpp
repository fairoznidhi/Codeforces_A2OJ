#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[60],b[60];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    //for(int i=0;i<n;i++)printf("%d",a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++)scanf("%d",&b[i]);
   // for(int i=0;i<m;i++)printf("%d",b[i]);
    int max=0,cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int num=b[j]/a[i];
            if(b[j]%a[i]==0 && num==max){
                cnt++;
            }
            if(b[j]%a[i]==0 && num>max){
                max=num;
                cnt=0;
            }
        }
    }
    printf("%d\n",cnt+1);
}