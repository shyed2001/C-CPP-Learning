#include<stdio.h>
int cube(int x)
{
  x=x*x*x;
  return(x);
}
int main()
{
 int n=8;
 printf("Cube of %d is %d\n",n,cube(n));
 return 0;
}


