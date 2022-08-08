//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void reveven(int);
int main()
{
    reveven(5);
    return 0;
}
void reveven(int n)
{
    if(n>1)
    {
        int a=2*n-2;
        printf(" %d",a);
        reveven(n-1);

    }

}
