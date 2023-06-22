                 /*Solution 7(c)*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the decimal number\n");
    int deciNum;
    scanf("%d",&deciNum);
    int octalNum=0,countval=1;

    while (deciNum != 0) {
        // decimals remainder is calculated
        int remainder = deciNum % 8;
  
        // storing the octalvalue
        octalNum += remainder * countval;
  
        // storing exponential value
        countval = countval * 10;
        deciNum /= 8;
    }
    printf("Octal value of number=%d", octalNum);
}