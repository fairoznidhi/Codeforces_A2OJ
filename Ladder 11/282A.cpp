#include<iostream>
using namespace std;
int main()
{
    int n,x=0,i;
    char c[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c[1]=='+')
            x=x+1;
        else
            x=x-1;
    }
    cout<<x<<endl;
}
