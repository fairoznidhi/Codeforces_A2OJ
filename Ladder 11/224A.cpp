#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int a,b,c;
    b=x*y/z;
    b=sqrt(b);
    a=x/b;
    c=z/a;
    c=a+b+c;
    printf("%d\n",c*4);
}
