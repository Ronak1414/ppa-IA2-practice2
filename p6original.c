#include<stdio.h>

void input(char *a)
{
  printf("Enter the word :\n");
  scanf("%s",a);
  
} 
int strrlen(char *a)
{
  int n;
  for(n=0;a[n];n++);
  return n;
}

void copy(char *a,char *b)
{
  for( int i=0;a[i] !='\0';i++)
    {
      b[i]=a[i];
    }
}

char reverse(char *b)
{
  int i,t;
  int n=strrlen(b);
  n--;
  
 /* for( l=n;b[l]==0;l--)
    {  
     b[l] = b[i]; 

    }*/
  for(i=0;i<n/2;i++)
    {
      t=b[i];
      b[i]=b[n-i];
      b[n-i]=t;

      
    }
  return t;
}

void output(char *a,char *b)
{
  printf("The reverse of %s is \n %s",a,b);
}

int main()
{
  char a[30],b[30];
  input(a);
  copy(a,b);
  reverse(b);
  output(a,b);
  return 0;
}