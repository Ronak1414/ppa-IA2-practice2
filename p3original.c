#include<stdio.h>
int input()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  return n;
}

int composite(int n)
{ 
  for (int i=2;i<n/2;i++)
  {
    if (n%i != 1)
    {
      return 1; 
    }
  } 
return -1; 
}


void output(int n,int c)
{
  if(c>0)
  {
    printf("%d is a composite",n);
  }
  else 
  printf("%d is not composite",n);
}

int main()
{
int n,c;
n=input();
c=composite(n);
output(n,c);
return 0;
}