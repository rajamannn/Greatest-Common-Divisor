//Program to print Great Common Divisor using if statement

#include<stdio.h>

int gcd(int a, int b)
{
  if (a == 0)
return b;
   return gcd(b % a, a);
}
int main()
{
  int a=35,b=7;

 printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
 a=16,b=28;
 printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
 a=22,b=6;
 printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));

return 0;

}
