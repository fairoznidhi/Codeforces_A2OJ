#include<bits/stdc++.h>
using namespace std;
int mx(int a[],int m,int n);
int main(){
    int n,m;
    cin>>n>>m;
    int a[1004],b[1004];
    for(int i=0;i<m;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    int cnt=0;
    int sum=0;
    while(1){
        int mx=*max_element(a,a+m);
        for(int i=0;i<m;i++){
            if(a[i]==mx){
                sum+=mx;
                a[i]--;
                cnt++;
                if(cnt==n)break;
            }
        }
        if(cnt==n)break;
    }
    cout<<sum<<" ";
    cnt=0;
    sum=0;
    sort(b,b+m);
    for(int i=0;i<m;i++){
        for(int j=b[i];j>0;j--){
            sum+=j;
            cnt++;
            if(cnt==n)break;
        }
        if(cnt==n)break;
    }
    cout<<sum<<endl;
    return 0;
}