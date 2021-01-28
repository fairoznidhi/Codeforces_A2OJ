#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)scanf("%d",&a[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum=0;
            if( (i>=0 && i<=2) && (j>=0 && j<=2) )sum+=a[i][j];
            if( (i>=0 && i<=2) && (j-1>=0 && j-1<=2) )sum+=a[i][j-1];
            if( (i>=0 && i<=2) && (j+1>=0 && j+1<=2) )sum+=a[i][j+1];
            if( (i-1>=0 && i-1<=2) && (j>=0 && j<=2) )sum+=a[i-1][j];
            if( (i+1>=0 && i+1<=2) && (j>=0 && j<=2) )sum+=a[i+1][j];
            if(sum%2==0)
                b[i][j]=1;
            else
                b[i][j]=0;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)printf("%d",b[i][j]);
        printf("\n");
    }
    return 0;
}
