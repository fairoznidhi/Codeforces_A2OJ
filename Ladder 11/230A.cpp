#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    int a[1005],b[1005];
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
            if((a[j]==a[j+1])&&b[j+1]>b[j]){
                swap(b[j],b[j+1]);
            }
        }
    }
    bool paisi=true;
    for(int i=0;i<n;i++){
        if(s<=a[i]){
            paisi=false;
            break;
        }
        s+=b[i];
    }
    if(paisi)cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}