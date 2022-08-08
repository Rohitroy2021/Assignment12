//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void bintodec(int n);
int main()
{
    bintodec(12);
    return 0;
}
void bintodec(int n)
{
    if(n==0)
        return ;
    bintodec(n>>1);
    printf("%d",n&1);
}
