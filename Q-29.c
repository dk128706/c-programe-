#include<stdio.h>
int main()
{
float sub1;
float sub2;
float sub3;
float sub4;
float sub5,sum,divide;

printf("Enter the first Subject Marks: \n");
scanf("%f",&sub1);

printf("Enter the second Subject Marks: \n");
scanf("%f",&sub2);

printf("Enter the Third Subject Marks: \n");
scanf("%f",&sub3);

printf("Enter the Fourth Subject Marks: \n");
scanf("%f",&sub4);

printf("Enter the Fifth Subject Marks: \n");
scanf("%f",&sub5);

sum= sub1+sub2+sub3+sub4+sub5;
divide= sum/5;
printf("Total Marks: %f \n",sum);
printf("Average Marks: %f \n",divide);
printf("Percentage: %f% \n",divide);
return 0;
}

