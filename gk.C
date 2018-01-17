#include<stdio.h>
void main()
{
double number;
printf("enter the number: ");
scanf("%1f",&number);
if(number <=0)
{
if (number == 0)
printf("if you enterde number is 0");
else
printf("if you enter the number is negative");
}
else
printf("if you enter the number is poistive ");
return 0;
}
