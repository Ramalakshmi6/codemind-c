#include<stdio.h>
int main()
{
    int n,a,b,arr[100],max=0,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(!(arr[i]>=a&&arr[i]<=b))
        {
            if(arr[i]>max)
            {
                max=arr[i];
                f++;
            }
        }
    }
    if(f==0)
    printf("-1");
    else
    printf("%d",max);
}