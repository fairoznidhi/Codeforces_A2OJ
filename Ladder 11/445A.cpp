#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    char str[102][102];
    for(int i=0;i<r;i++)cin>>str[i];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(str[i][j]=='.')str[i][j]='B';
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(str[i][j]=='B'){
                if(i%2==0 && j%2!=0)str[i][j]='W';
                if(i%2!=0 && j%2==0)str[i][j]='W';
            }
        }
    }
    for(int i=0;i<r;i++)cout<<str[i]<<endl;
    return 0;
}