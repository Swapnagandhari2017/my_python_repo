
#include<stdio.h>


int main(void)
{

int a[12] = {5,4,3,2,6,7,-23,8,-64,2,0,6};
int lowest,num;
    lowest = a[0];
    for(int i = 1; i < 12; i++)
    {
        num = a[i];
        if(num < lowest)
	{
            lowest = num;
        }
    }

    printf("lowest is %d\n",lowest);
}




