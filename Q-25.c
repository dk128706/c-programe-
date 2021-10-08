#include<stdio.h>
#include<math.h>
int main()
{
   float number;
   double result;
   printf("Enter any integer number:\n");
   scanf("%f",&number);
   result = sqrt(number);
   printf("Square root value=%lf \n",result);

   return 0;
}
