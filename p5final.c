#include<stdio.h>

int input()
{
  int a;
  printf("enter a number:");
  scanf("%d",&a);
  return a;
}

int gcd(int a,int b) 
{
 int t;
 while (b != 0)
 {
   t = b;
   b = a%b;
   a = t;
 }
 return a;
}

void output(int a, int b, int gcd)
{
  printf("the gcd of %d and %d is %d",a,b,gcd);
}

int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  output(a,b,gcd);
  return 0;
}