//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void bintooctal(int n);
int main()
{
    bintodec(12);
    return 0;
}
void bintooctal(int n)
{
    if(n==0)
        return ;
    bintooctal(n>>1);
    printf("%d",n%8);
}
