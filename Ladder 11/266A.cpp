#include<iostream>
using namespace std;
int main()
{
    int c=0,i,n;
    char s[100];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    cout<<c<<endl;
}
