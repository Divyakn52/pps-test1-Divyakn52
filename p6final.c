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

    for(i=1; i<n; i++)   //i=5
       {
       printf("%d+\n",i);
       }
       printf("%d is %d\n",i,sum);
     return 0;  
}