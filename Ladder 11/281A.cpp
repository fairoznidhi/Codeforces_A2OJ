#include<iostream>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    if(s[0]>=97 && s[0]<=122)
    {
        s[0]='A'+s[0]-'a';
    }
    cout<<s<<endl;
}
