#include <stdio.h>
int main()
{
int num;
double amount,balance,bonus;
do
{
printf("Choose:\n");
printf("1. Deposit Money\n");
printf("2. Withdraw Money\n");
printf("3. Check Balance\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d",&num);
if(num==1)
{
printf("Enter amount to deposit: ");
scanf("%lf",&amount);
if(amount>0)
{
bonus=0;
if(amount>=25000)
{
bonus=amount*0.01;
printf("\nBonus of Rs%f added\n",bonus);
}
balance=(balance+amount+bonus)-5.0;
printf("Rs5 service charge applied.\n");
printf("Updated Balance: Rs%f \n",balance);
}
else
{
printf("Enter Valid Amount.\n");
}
}
else if(num==2)
{
printf("Enter amount to withdraw: ");
scanf("%lf",&amount);
if(amount>0)
{
if(amount+5.0<= balance)
{
balance= (balance-amount)-5.0;
printf("Rs%f withdrawn successfully.\n",amount);
printf("Rs.5 service charge applied.\n");
printf("Updated Balance: Rs%f \n",balance);
}
else
{
printf("Insufficient Balance!\n");
}
}
else
{
printf("Enter Valid Amount!\n");
}
}
else if(num==3)
{
printf("Current Balance: Rs%f \n",balance);
}
else if(num==4)
{
printf("Thank You For Banking With Us! \n");
}
else
{
printf("Invalid Choice! Try again.\n");
}
}
while(num!=4);
return 0;
}
