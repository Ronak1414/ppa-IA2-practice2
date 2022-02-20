/*#include<stdio.h>
int array_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}

void input(int n,int a[n])
{
  printf("Enter the numbers\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int sum(int n,int a[n])
{ int sum=0,b, i,l;
  for( l=0;l<n;l++)
  { for ( i=2;i<n/2;i++)
    {
    if (n/i != 1)
      {
       b=1; 
      }
    } 
if(b==1)
        {
  sum=sum+a[l];
        }
  }
}

void output(int sum)
{
  printf("sum = %d",sum);
}

int main()
{
  int n;
  n=array_size();
  int a[n];
  input(n,a);
 int s=sum(n,a);
 output(s);
 return 0;


}*/

/*#include<stdio.h>
int input_size(){
  int n;
  printf("enter the size of the array");
  scanf("%d",&n);
  return n;
  
}
void input_array(int n,int a[n]){
  int i;
  for (i=0;i<n;i++){
    scanf("%d",&a[n]);
  }
}
int sum(int n,int a[n]){
  int i,count,sum;
  sum=0;
  count=0;
  for (i=0;i<n;i++){
    if (a[i]%2==0){
      count++;
      }
    else if ( count==2){
      continue;
      }
    else{
      sum+=a[i];
    }
  }
}
int output(int sum){
  printf("the sum of the composite numbrs is%d",sum);
}
int main(){
  int b,a[20],res;
  b=input_size();
  input_array(b,a);
  res=sum(b,a);
  output(res);
  return 0;

}*/

#include<stdio.h>
int input_array_size()
{
  int x;
  printf("How many numbers do you want to enter:- ");
  scanf("%d",&x);
  return x;
}
void input_array(int n,int a[n])
{
  int i;
  
  for(i=0;i<n;i++)
  {
    printf("Enter %dth number:- ",i+1);
    scanf("%d",&a[i]);
  }
}
int sum_composite(int n, int a[n])
{
  int k,i,sum=0,count=0 ;
  for(i=0;i<n;i++)
  {
    for(k=1;a[i]%k==0 && k<a[i];k++)
    {
      count=count+1;
    }
    if(count>2)
    sum=sum+a[i];
    // printf("%d \n",sum);
  }
  return sum;
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