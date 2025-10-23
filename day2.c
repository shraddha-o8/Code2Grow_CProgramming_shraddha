#include <stdio.h>
int main()
{
float mc;
printf("Enter meal cost: "); 
scanf("%f",&mc);
float tax=(5/100.0)*mc;
float tip=(10/100.0)*mc;
float bill= mc+tax+tip;
printf("Total Bill: %f \n",bill);
printf("Each person should pay as follows:\n");
float share= (bill/2.0);
printf("You: %f \n",share);
printf("Friend 2: %f \n",share);
printf("Friend 3: 0.00  \n");
return 0;
}

