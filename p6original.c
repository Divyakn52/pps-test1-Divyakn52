#include<stdio.h>
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}
int sum_n(int n)
{ 
  int i,sum=0;
  for(i=0;n>=0;i++)
  sum=sum+i;
  return sum;
}
void output(int n,int sum)
{
  printf("1");
  for(int f=2;f<n;f=f+1)
  {
    printf("+%d",f);
  }
  printf("+%d is %d\n",n,sum);
}
  int main()
  {
    int n,sum;
    n=input();
    sum=sum_n(n);
    output(n,sum);
    return 0;
  }