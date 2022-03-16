#include <stdio.h>

int input_array_size()
{
  int length;
  printf("Enter the length of the array:");
  scanf("%d", &length);
  return length;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array:");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}


int sum_composite(int n, int a[n])
{
  int count=0,i;
  for(i=0;i<n;i++)
  {
       if(a[i]==2)
       {
          continue;
       }       
        else if(a[i]%2==0)
        {
         count=count+a[i];
        }
        
    }
    return count;
  }

void output(int sum)
{
  printf("Sum of all composite numbers is %d",sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_composite(n,a);
  output(result);
  return 0;
}

