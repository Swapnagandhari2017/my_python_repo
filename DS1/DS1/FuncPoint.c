#include<stdio.h>


int subtraction (int a, int b) {
   return a-b;
}

int main() {
   
   int x,y;	
   int (*fp) (int, int)=subtraction;

   printf("please enter 2 nembers a and b\n");
   scanf("%d %d",&x,&y);
   //Calling function using function pointer
   int result = fp(x, y);
   printf(" Using function pointer we get the result of a-b: %d\n",result);
   return 0;
}
