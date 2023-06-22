/*A number is evenly divided by 5,if it
is divided by 10.
Proof:
n/5=2m where m is any integer
n/10=m*/ 
  
               /*solution 3*/

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=2;i<150;i+=3)
    {
    if(i%10==0)
      sum+=i;
    printf("%d ",i);
    }
    printf("\n\nsum of all such integers =%d",sum);
    return 0;
}