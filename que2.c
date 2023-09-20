//.Write a function in C that reverses a given string in-place without using string
//function.

#include<stdio.h>
int rev();
int main()
{
    int r;
    r=rev();
}
int rev()
{
    int num,rev,rem=0;
    printf("enter number:");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;//5
        rev=rev+rem;//5+
        num=num/10;
        /* code */
    }
    return num;
}

