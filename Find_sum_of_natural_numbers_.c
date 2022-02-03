#include<stdio.h>
int main()
{
    int n,m,sum=0;
    scanf("%d",&n);
    for(m=0;m<=n;m++)
    {
        sum+=m;
    }
    printf("%d",sum);
    return 0;
}