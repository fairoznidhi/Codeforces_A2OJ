#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,c,d,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        d=a+b+c;
        if(d==2||d==3)
            count++;
    }
    cout<<count<<endl;
}
