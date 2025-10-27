#include <stdio.h>
int main()
{
int age,health_condition;
char gender;
printf("Enter age:");
scanf("%d",&age);
printf("Enter gender(M/F):");
scanf(" %c",&gender);
printf("Health condition(1-Healthy/0-Unhealthy:");
scanf("%d",&health_condition);
printf("Customer Details:\n");
printf("Age: %d \n",age);
printf("Gender: %c \n",gender);
printf("Health: %s \n",(health_condition==1) ? "Healthy" : "Unhealthy");
if((health_condition==1 || health_condition==0) && (gender=='M'||gender=='F'))
{
if(gender=='M')
{
if(age<25)
{
if(health_condition==1)
{
printf("Final Premium: 5000Rs \n");
}
else
{
printf("Not Eligible\n");
}
}
else if(age >=25 && age<=40)
{
if(health_condition==1)
{
printf("Final Premium: 7000Rs\n");
}
else
{
printf("Final Premium: 9500Rs\n");
}
}
else if(age>=41 && age<=60)
{
if(health_condition==1)
{
printf("Final Premium: 10000Rs\n");
}
else
{
printf("Final Premium: 13000Rs\n");
}
}
else if(age>60)
{
if(health_condition==1)
{
printf("Final Premium: 15000Rs\n");
}
else
{
printf("Status: Not Eligible For Insurance.\n");
}
}
}
else if(gender=='F')
{
if(age<25)
{
if(health_condition==1)
{
printf("Final Premium:%f \n",5000-(5000* 0.10));
}
else
{
printf("Not Eligible \n");
}
}
else if(age >=25 && age<=40)
{
if(health_condition==1)
{
printf("Final Premium:%f \n",7000-(7000* 0.10));
}
else
{
printf("Final Premium:%f \n",9500-(9500* 0.10));
}
}
else if(age>=41 && age<=60)
{
if(health_condition==1)
{
printf("Final Premium:%f \n",10000-(10000* 0.10));
}
else
{
printf("Final Premium:%f \n",13000-(13000* 0.10));
}
}
else if(age>60)
{
if(health_condition==1)
{
printf("Final Premium:%f \n",15000-(15000* 0.10));
}
else
{
printf("Status: Not Eligible For Insurance.\n");
}
}
}
}
else
{
printf("Invalid Input \n");
}
return 0;
}
