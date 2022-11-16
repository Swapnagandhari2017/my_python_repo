
/* Double pointers*/

#include<stdio.h>
#include<malloc.h>


void foo(int *ptr)
{
 int b = 10;
 *ptr=b;
 printf("from foo function %d\n",*ptr);
}


int main()
{
 int *ptr,a=20;
 ptr=&a;
 foo(ptr);
 printf("%d\n",*ptr);
return 0;
}


