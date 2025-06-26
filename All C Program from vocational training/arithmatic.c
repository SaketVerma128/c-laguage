#include<stdio.h>
int main()
{
 int a,b;
 printf("enter 2 integer values\n"); 
 scanf("%d%d",&a,&b);
 printf("addition %d/%d=%d\n",a,b,a+b);
 printf("subtraction %d/%d=%d\n",a,b,a-b);
 printf("modulus %d/%d=%d\n",a,b,a%b);
 printf("multipication %d/%d=%d\n",a,b,a*b);
 printf("division %d/%d=%d\n",a,b,a/b);
 return 0;
}