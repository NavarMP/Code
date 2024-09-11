//Sum of the digits and reverse

#include <stdio.h>

int main() {

  printf ("Find sum of the digits and reverse of a number\n");

  //Input
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);

  //Finding sum of the digits and reverse
  int sum = 0, rev =0;
  while(num !=0 ) {
    int dig = num % 10;
    sum += dig;
    rev = rev * 10 + dig;
    num /= 10;
  }

  //Output
  printf("\nSum = %d",sum);
  printf("\nReverse = %d",rev);

  return 0;
}