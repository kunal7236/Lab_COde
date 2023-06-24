#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter the number of items\n");
  int n;
  scanf("%d",&n);
  printf("Now,Enter the price of each items\n");
  int price[n];
  for(int i=0;i<n;i++)
  {
    printf("\nItem %d:",(i+1));
    scanf("%d",&price[i]);
  }
  printf("Now,Enter quantity for each items\n");
  int qnt[n];
  for(int i=0;i<n;i++)
  {
    printf("\nItem %d:",(i+1));
    scanf("%d",&qnt[i]);
  }
  int subtotal[n];
  int total=0;
  for(int i=0;i<n;i++)
  {
    subtotal[i]=price[i]*qnt[i];
    total+=subtotal[i];
  }
  printf("\nItem\t\tPrice\tQuantity\tSubtotal\n");
  for(int i=0;i<n;i++)
  {
    printf("\nItem %d:\t\t%d\t%d\t\t%d",(i+1),price[i],qnt[i],subtotal[i]);
  }
 printf("\n--------------------------------------------\n");
 printf("Total\t\t\t\t\t%d\n",total);
 char c='%';
 int gtotal=0;
if(total<=1000)
{
    printf("Discount\t5%c\t\t\t-%.0f",c,(0.05*total));
    gtotal=0.95*total;
}
else if(total<=5000)
{
    printf("Discount\t10%c\t\t\t-%.0f",c,(0.1*total));
    gtotal=0.9*total;
}
else
{
    printf("Discount\t15%c\t\t\t-%.0f",c,(0.15*total));
    gtotal=0.85*total;
}
printf("\n--------------------------------------------\n");
printf("GRAND TOTAL\t\t\t\t%d",gtotal);
  }