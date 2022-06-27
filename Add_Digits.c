#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    scanf("%d",&num);
    do
    {
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        num=sum;
    }while(num/10!=0);
    printf("%d",sum);
    return 0;
}