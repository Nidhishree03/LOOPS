#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nMENU CARD \nSelect your food \n1.pizza \n2.burger \n3.pasta \n4.frenchfries \n5.sandwich\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected pizza.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=239;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected burger.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=129;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected pasta.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=179;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected frenchfries.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=99;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected sandwich.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=149;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}
