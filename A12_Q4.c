//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void revodd(int);
int main()
{
    revodd(5);
    return 0;
}
void revodd(int n)
{
    if(n>0)
    {
        int a=2*n-1;
        printf(" %d",a);
        revodd(n-1);


    }
}
