#include<stdio.h>
main()
{
 int a,n;
 printf("enter a,n values\n");
 scanf("%d%d",&a,&n);
 a += 100;
 printf("a=%d\n",a);
 a -= 20;
 printf("a=%d\n",a);
 a *= (n+1);
 printf("a=%d\n",a); 
 a /= (n+1);
 printf("a=%d\n",a);
 a %= n;
 printf("a=%d\n",a);
 }