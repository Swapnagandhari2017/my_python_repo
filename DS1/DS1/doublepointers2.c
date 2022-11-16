/* Double pointers2*/

#include<stdio.h>
#include<malloc.h>


void foo(int **ptr)
{
 int b = 10;
*ptr=&b;
}


int main()
{
 int *ptr,a=20;
 ptr=&a;
 foo(&ptr);
 printf("%d\n",*ptr);
return 0;
}

