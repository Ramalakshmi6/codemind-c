#include<stdio.h>
int main()
{
    int i,n,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        sum+=arr[i];
    }
    printf("%d",sum);
    
}