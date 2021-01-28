#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a[104],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    printf("%.12lf\n",sum/n);

}
