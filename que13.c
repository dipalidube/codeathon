/*.Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle.*/
#include<stdio.h>
int main()
{
    int num,l,b,r,area_cir,area_react,area_sq;
    float pi=3.14;
    printf("enter number:");
    scanf("%d%d%d",&num,&l,&b,&r);
    switch (num)
    {
    case 11:
   // int r;
   // float pi=3.14,area_cir;
    printf("enter r=");
    //scanf("%d",&r);
    area_cir=pi*(r*r);
    printf("%0.2f",area_cir);
        break;
    case 22:
    //int l,b;
    printf("enter l,b:");
    //scanf("%d%d",&l,&b);
    //area_react=l*b;
    printf("%d",l*b);
    break;
    case 33:
    //int l,area_sq;
   printf("enter l");
    //scanf("%d",l);
    area_sq=(4*l);
    printf("%d",l);
    break;
   
    default:printf("invalid input");
        break;
    }
}


