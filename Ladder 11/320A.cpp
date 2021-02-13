#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    bool paisi=true;
    while(n!=0){
        int r=n%10;
        n/=10;
        if(r!=4 && r!=1){
            printf("NO\n");
            paisi=false;
            break;
        }
        else{
            if(r==4){
                r=n%10;
                n/=10;
                if(r==4){
                    r=n%10;
                    n/=10;
                    if(r!=1){
                        printf("NO\n");
                        paisi=false;
                        break;
                    }
                }
                else if(r!=1){
                    printf("NO\n");
                    paisi=false;
                    break;
                }
            }
        }
    }
    if(paisi)
        printf("YES\n");
    return 0;
}
