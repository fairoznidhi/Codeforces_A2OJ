#include<stdio.h>
int main()
{
    int a[4],temp;
    int sum,num;
    scanf("%d",&sum);
    while(1)
    {
        sum++;
        num=sum;
        for(int i=3;i>=0;i--)
        {
            a[i]=num%10;
            num/=10;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(a[i]==a[i+1])
                count++;
        }
        if(count==0)
            break;

    }
    printf("%d\n",sum);
    return 0;
}
