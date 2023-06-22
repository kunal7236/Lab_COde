                     /*Solution 10*/
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

int c=n;               //Copy of the original number
int rev=0;
    /*Finding the reverse of the number*/
while(c>0)               
{
    int d=c%10;
    rev=rev*10+d;
    c/=10;
}
if(n==rev)
printf("Palindrome no.");
else
printf("Not a Palindrome no");
return 0;
}
