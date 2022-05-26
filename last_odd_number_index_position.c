#include<stdio.h>
int main()
{
    int n,arr[100],r,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            r=i;
        }
    }
    printf("%d",r);
}