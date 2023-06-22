                         /*Solution 7(a)*/

#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter a decimal number\n");
    int num;
    scanf("%d",&num);
    int binNumber=num;
    int no_of_bits=0;

    while (num > 0) {        //For number of bits; e.g 5 has 3 bits (101)
        no_of_bits++;        //2 has 2 bits  (10)
        num /= 2;
    }
    printf("No of bits=%d\n",no_of_bits);

    while(no_of_bits>0)        
    {
        if((binNumber&(1<<--no_of_bits)))
         printf("1");
         else
         printf("0");
    }
}