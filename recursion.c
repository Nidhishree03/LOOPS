#include<stdio.h>
int sum(int n)
{
  if(n!=0)
    return(n%10+sum(n/10));
  else
    return 0;
}
int main()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  printf("sum of the digits of %d is:%d",n,sum(n));
  return 0;
}
