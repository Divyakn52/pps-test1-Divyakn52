#include<stdio.h>
int main()
{
  int i, n, sum=0;

  printf("\n enter a number\n");
  scanf("%d" , &n);    //5

  for(i=0;i<n; i++)     //i=5
    {
      sum=sum + i;
    }
  printf("/n sum ofn=%d\n",sum);
  return 0;  
}