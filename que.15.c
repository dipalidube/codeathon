/*What are the differences between the integer and floating-point versions of the
arithmetic functions in terms of their parameters and return types? explain with
code.
*/
#include<stdio.h>
int fun1(int,int);
float fun2(float,float);
 main()
{
    int a=4,b=7,f1;

    float p=7.4,q=8.7,f2;
    f1=fun1(a,b);
    printf("%d",f1);
    f2=fun2(p,q);
    printf("%f",f2);
}
int fun1(int a, int b)
{
 
    return a+b;
}
int fun2(float p, float q)
{
    return p-q;
}