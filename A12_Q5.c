//Write a recursive function to print first N even natural numbers
#include<stdio.h>
void even(int);
int main()
{
    even(5);
    return 0;
}
void even(int n)
{
    if(n>1)
    {
        even(n-1);
        int a=2*n-2;
        printf(" %d",a);
    }

}
