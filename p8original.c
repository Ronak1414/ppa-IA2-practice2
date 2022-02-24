#include <stdio.h>
typedef struct triangle
{
float b,a,area;
}triangle;

int input_n()
{
  int n;
  printf("Enter the number of triangles you want to enter");
  scanf("%d",&n);
  return n;
}

triangle input()
{ triangle t;
  printf("Enter the base of the triangle");
  scanf("%f",&t.b);
  printf("Enter the altitude of the triangle");
  scanf("%f",&t.a);
  return t;
}

void input_triangles(int n,triangle t[n])
{
  for (int i=0;i<n;i++)
    {
      t[i]=input();
    }
}

void area(triangle *t)
{
  t->area = 0.5*t->b * t->a;
}

void find_area(int n,triangle t[n])
{
 for(int i=0;i<n;i++)
   {
     area(&t[i]);
   }
}

triangle smallest(int n,triangle t[n])
{
  triangle small=t[0];
  for(int i=1;i<n;i++)
    {
  if(small.area>t[i].area)
  {
    small=t[i];
  }
      }
  return small;
}

void output(triangle smallest)
{ 
  printf("The area of the smallest triangle with base %f and altitude %f is %f",smallest.b,smallest.a,smallest.area);
}

int main()
{
  int n=input_n();
  triangle t[n];
  input_triangles(n,t);
  find_area(n,t);
  triangle small;
  small=smallest(n,t);
  output(small);
  return 0;
}
