//Write a recursive function to print reverse of a given number
#include<stdio.h>
void rev(int);
int main()
{
 rev(12345);
 printf("\n");
    return 0;
}
void rev(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        rev(n/10);
    }
}
