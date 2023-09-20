//. Write a program to print EVEN numbers from 1 to N using a while loop.

#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    while (num>0)
    {
        num++;
    }
    
        if(num%2==0)
        printf("it is even");
        else
        printf("it is odd");
    
    return 0;
}