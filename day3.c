#include <stdio.h>
int main()
{
int units;
printf("Enter total units consumed: ");
scanf("%d",&units);
printf("Electricity Bill Summary: \n");
printf("Units consumed: %d \n",units);
if((units>0) && (units<=100))
{
float rate1=(units*3.00)+50.0;
printf("Total Bill (including meter charge Rs.50): %f \n",rate1);
}
else if((units>=101) && (units<=200))
{
float rate2= (units*4.50)+50.0;
printf("Total Bill (including meter charge Rs.50): %f \n",rate2);
}
else if((units>=201) && (units<=300))
{
float rate3= (units*6.00)+50.0;
printf("Total Bill (including meter charge Rs.50): %f \n",rate3);
}
else
{
float rate4= (units*8.00)+50.0;
printf("Total Bill (including meter charge Rs.50): %f \n",rate4);
}
return 0;
}


