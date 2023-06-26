#include <stdio.h>
int main() {
int decimal, quotient, remainder, i = 1, j;
char hexadecimal[100];
printf("Enter a decimal number: ");
scanf("%d", &decimal);
quotient = decimal;
while (quotient != 0) {
remainder = quotient % 16;
if (remainder < 10)
hexadecimal[i++] = remainder + 48;
else
hexadecimal[i++] = remainder + 55;
quotient = quotient / 16;
}
printf("Hexadecimal equivalent of %d is: ", decimal);
for (j = i - 1; j > 0; j--)
printf("%c", hexadecimal[j]);
return 0;
}
