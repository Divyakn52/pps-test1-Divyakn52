#include<stdio.h>
int input_array_size()
{
  int k;
  printf("enter the size of array;\n");
  sacnf("%d",&k);
  return k;
}
void array_input(int n,int *a)
{
  printf("enter the values\n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i]
  }
  
}