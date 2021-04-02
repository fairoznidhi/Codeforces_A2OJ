#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int sp=1;sp<=(n*2-i*2);sp++)cout<<" ";
        for(int j=0;j<=i;j++){
            if(i==0)cout<<j;
            else
            cout<<j<<" ";
        }
        for(int j=i-1;j>=0;j--){
            if(j==0)cout<<j;
            else
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>=0;i--){
        for(int sp=1;sp<=(n*2-i*2);sp++)cout<<" ";
        for(int j=0;j<=i;j++){
            if(i==0)cout<<j;
            else
            cout<<j<<" ";
        }
        for(int j=i-1;j>=0;j--){
            if(j==0)cout<<j;
            else
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
