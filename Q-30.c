#include<stdio.h>
int main()
{
float p;
float r;
float t,multiply,divide;
printf("Enter the Principle Amount:\n");
scanf("%f",&p);

printf("Enter the Rate of Interest:\n");
scanf("%f",&r);

printf("Enter the Time in years:\n");
scanf("%f",&t);

multiply= p*r*t;
divide= multiply/100;
printf("Simple Interest is %f \n",divide);
return 0;
}
