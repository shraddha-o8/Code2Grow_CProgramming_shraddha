#include <stdio.h>
int main()
{
int choice;
float balance = 10000;
float amount;
int transactioncount = 0;
printf("========= Mini ATM Simulator =========\n");
printf("Initial Balance: Rs.%.2f\n\n", balance);
while (transactioncount < 5)
{
printf("1. Check Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice < 1 || choice > 4)
{
printf("Invalid choice! Please select between 1-4.\n\n");
continue;
}
if (choice == 1)
{
printf("Your Current Balance: Rs.%.2f\n\n", balance);
transactioncount++;
}
else if (choice == 2)
{
printf("Enter amount to deposit: ");
scanf("%f", &amount);
if(amount <= 0)
{
printf("Invalid amount! Deposit must be greater than Rs.0.\n\n");
continue;
}
balance += amount;
printf("Amount Deposited Successfully!\n\n");
transactioncount++;
}
else if(choice == 3)
{
printf("Enter amount to withdraw: ");
scanf("%f", &amount);
if(amount <= 0)
{
printf("Invalid amount! Withdrawal must be greater than Rs.0.\n\n");
continue;
}
if(balance - amount < 500)
{
printf("Insufficient funds! Minimum balance of Rs.500 must be maintained.\n\n");
}
else
{
balance -= amount;
printf("Withdrawal Successful! Remaining Balance: Rs.%.2f\n\n", balance);
}
transactioncount++;
}
else if(choice == 4)
{
printf("Thank you for banking with us!\n");
break;
}
if(transactioncount == 5)
{
printf("Transaction limit (5) reached! Session will end automatically.\n\n");
break;
}
}
printf("========= Transaction Summary =========\n");
printf("Total Transactions: %d\n", transactioncount);
printf("Final Balance: Rs.%.2f\n", balance);
printf("Session Ended.\n");
return 0;
}
