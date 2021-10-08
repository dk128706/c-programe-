#include<stdio.h>
#include<math.h>
int main()
{
float p,r,n,s,i,m;
printf("Enter the Principle value: \n");
scanf("%f",&p);
printf("Enter the rate of interest: \n");
scanf("%f",&r);
printf("Enter the number of years: \n");
scanf("%f",&n);
s= (1+r/100);
i= pow(s,n);
m= p*i;
printf("Compound Interest is %f",m);
}

