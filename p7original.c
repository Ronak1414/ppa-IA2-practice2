#include<stdio.h>


typedef struct triangle
{
float b,a,area;
}triangle;

triangle input()
{ triangle n;
  printf("Enter the base of the triangle");
  scanf("%f",&n.b);
  printf("Enter the altitude of the triangle");
  scanf("%f",&n.a);
  return n;
}

void area(triangle *t)
{
  t->area = 0.5*t->b * t->a;
}

void output(triangle t)
{
  printf("the area of the triangle with base and altitude = %f and %f is %f\n",t.b,t.a,t.area);
}

int main()
{
  triangle t ;
  t=input();
 area (&t);
  output(t);
  return 0;
}