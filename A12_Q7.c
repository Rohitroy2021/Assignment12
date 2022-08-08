//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void square(int);
int main()
{
 square(10);
 printf("\n");
    return 0;
}
void square(int n)
{
    if(n>0)
    {
        square(n-1);
    printf(" %d",n*n);
    }
}
