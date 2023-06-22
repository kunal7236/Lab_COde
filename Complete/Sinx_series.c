/*sin x= x -x³/3! +x⁵/5! ......*/

                            /*solution 2*/

#include<stdio.h>
#include<math.h>
int main()
{
int x;
printf("Enter the value of x\n");
scanf("%d",&x);
int fact=1;
int i=1;
float s=0;
float n=0;
do
{
    if(i==1)                      //For 1! evaluation
    {
        s=s+pow(x,1);
        i+=2;
        n=1;
        continue;
    }

   fact=fact*(i-1)*i;             //Calculating odd factorial i.e 3!,5!,7!...

   n=pow(x,i)/fact;               //Finding each term of the series

/*Inserting -(minus) and +(plus) alternatively at alternate terms*/
   if(((i+1)/2)%2==0)
      s=s-n;
   else
      s=s+n;
   i+=2;
}while(n>=0.00001);            //Condition to restrict further iterations

printf("sin x=%f",s);
return 0;
}