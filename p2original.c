#include<stdio.h>
int input()
{
  int a;
  printf("Enter the side:\n");
  scanf("%d",&a);
  return a;
}

int check(int a, int b,int c)
{ 
  if(a==b || a==c)
  {
    return 1;
  }
  else if(b==c)
  {
    return -1;
  }
  else 
  return 0;
}

void output(int a, int b, int c,int s)
{
  if(s>0 || s<0)
  {
    printf("The triangle is not scalene");
  }
  else 
  printf("The triangle is scalene");
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  int s=check(a,b,c);
  output(a,b,c,s);
  return 0;
}