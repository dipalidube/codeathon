//.Write a program to read an integer and print its multiplication table.


#include<stdio.h>
int main()
{
    int a=3;
    for(a=1;a<=30;a++)
    {
        if(a%3==0)
            printf("%d\n" ,a);
    }
return 0;
}



