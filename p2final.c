#include<stdio.h>

int input_sides()
{
  int a;
  printf("enter the lenght of each sides a triangle:");
  scanf("%d",&a);
  return a;
}

int check_scalene(int a,int b,int c)
{
   if(a!=b&&b!=c&&a!=c)
     return 1;
    else 
      return 0;
}

void output(int a,int b,int c,int isscalene)
{
  if (isscalene ==1)
  printf("the give lenght of the triangle is scalene ");
  else
  printf("the given length of the tringle is not scalene");
}

int main ()
{
  int a,b,c;
  a= input_sides();
  b = input_sides();
  c = input_sides();
  int scalene=check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}