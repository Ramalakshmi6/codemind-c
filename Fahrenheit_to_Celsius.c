#include<stdio.h>
int main()
{
  float celcius,f=42;
  scanf("%f",&f);
  celcius = (f-32)*5/9;
  printf("%.2f", celcius);
 return 0;
}