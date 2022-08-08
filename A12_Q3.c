//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int);
int main()
{
    odd(5);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
        odd(n-1);
        int a=2*n-1;
        printf(" %d",a);
    }
}
