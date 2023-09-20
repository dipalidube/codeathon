//Write a program to Print Prime Numbers between Two numbers.
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter any num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("it is prime");

    }
    else
    {
        printf("it is not prime");
    }
}