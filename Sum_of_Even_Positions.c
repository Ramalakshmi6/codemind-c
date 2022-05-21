#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}