#include<stdio.h>
void input(int *a, int *b) //function reference
{
  printf("enter the two numbers\n");
  scanf("%d %d", a, b);
}
void add(int a,int b,int *sum) //function definition
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("%d+%d=%d\n",a,b,sum);
}
int main()
{
  int x,y,ans;
  input(&x,&y); //pass by reference
  add(x,y,&ans); //pass by value(a,b) and reference (sum)
  output(x,y,ans); // pass by value
return 0;
}