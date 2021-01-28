#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j,b,c,d,e,f;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                b=i-2;
                c=j-2;
            }
        }
    }
    d=abs(b);
    e=abs(c);
    f=d+e;
    cout<<f<<endl;
}
