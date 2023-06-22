/*An interactive program in C to check whether
the psotive number is Prime or Not */
                     
                     /*Solution 1(a)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int n;

    /*A do while loop to force the user to input
    a positive number only!*/
    do{
        printf("Enter a positive number\n");
        scanf("%d",&n);
    }while(n<=0);

    if(n==1)                  //Default case
    {
        printf("Neither Prime nor Composite");
        return 0;
    }
    int count=0;               /*counter variable:to count
                               number of factors*/

    /*O(✓n) time complexity used instead of O(n)*/
    for(int i=2;i*i<=n;i++)
      count+=(n%i)?0:2;

    if(count!=0)             //Final condition Check
    printf("%d is not a prime number",n);
    else
    printf("%d is a prime number",n);
    return 0;
    
}