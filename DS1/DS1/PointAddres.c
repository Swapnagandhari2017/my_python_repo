#include<stdio.h>
int main() {
   int val = 28;
   int *pt;
   pt = &val;
   printf("Address of pointer : %p\n",pt);
   pt = pt + 5;
   printf("Addition to pointer : %p\n",pt);
   pt = pt - 5;
   printf("Subtraction from pointer : %p\n",pt);
   pt = pt + 1;
   printf("Increment to pointer : %p\n",pt);
   pt = pt - 1;
   printf("Decrement to pointer : %p\n",pt);
   return 0;
}
