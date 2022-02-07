#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base of the Triange\n");
  scanf("%f",base);
  printf("Enter the height of the Triange\n");
  scanf("%f",height);
}

void area(float base,float height,float *a)
{ float b=base*height;
  *a = 0.5 * b;
}

void output(float base,float height,float a)
{
  printf("The area of the triangle with %f and %f is %f",base,height,a);
}

int main()
{ float base,height,a;
  input(&base,&height);
  area(base,height,&a);
  output(base,height,a);
  return 0;
}
