#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a;
    cin>>n>>k;
    if(n%2==0)a=n/2;
    else a=(n+1)/2;
    if(k<=a)
    {
        //bijor
        printf("%I64d\n",k*2-1);
    }
     else
     {
         //jor
        k=k-a;
        printf("%I64d\n",k*2);
     }
}
