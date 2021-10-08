#include<stdio.h>
int main()
{
int num1;
int num2,sum;
int substract;
printf("Enter the first angle: \n");
scanf("%d",&num1);
printf("Enter the second angle: \n");
scanf("%d",&num2);
sum= num1+num2;
substract= 180-sum;
printf("Third angle of triangle is %d \n",substract);
return 0;
}
