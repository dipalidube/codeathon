//Write a program to print weekday of given date.
#include<stdio.h>
int main()
{
    int date;
printf("enter date form 1 to 7");
scanf("%d",&date);
    switch (date)
    {
    case 1:printf("Monday"); break;
    case 2:printf("thuesday"); break;
    case 3:printf("wedensday"); break;
    case 4:printf("thursday"); break;
    case 5:printf("friday"); break; 
    case 6:printf("saturday");break;
    case 7:printf("sunday");break;
    default:
    printf("enter valid date");
        break;
    }
    return 0;
}