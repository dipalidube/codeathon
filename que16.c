/*Explain how the nested loops in the program work together to print a pyramid
of asterisks based on the user input n. Also, provide an example of the output
when n is set to 5. write code for it.*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
 
    }
    return 0;
}
