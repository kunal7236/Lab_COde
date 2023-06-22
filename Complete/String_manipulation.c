                  /*Solution 13*/
#include<stdio.h>
int main()
{
    printf("Enter a sentence\n");
    char c[100];
    gets(c);
    int i=0;
    while(c[i]!='\0')
    {
        if(c[i]>=65 && c[i]<=90)
          c[i]=c[i]+32;
        else if(c[i]>=97 && c[i]<=122)
          c[i]=c[i]-32;
        else if(c[i]>=48 && c[i<=57])
          c[i]='0';
        else
         c[i]='*';
        i++;
    }
    printf("The modified sentences is:\n%s",c);
}