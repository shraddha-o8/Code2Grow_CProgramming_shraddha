#include <stdio.h>
int main()
{
int num_customers, num_items,feedback;
float price,quantity,subtotal,gst,total_bill;
float total_revenue= 0, highest_bill= 0,total_feedback= 0;
printf("Enter number of customers: ");
scanf("%d", &num_customers);
printf("\n--- Restaurant Bill Summary ---\n");
for(int i = 1; i<= num_customers; i++)
{
printf("\nCustomer %d:\n", i);
printf("Enter number of items: ");
scanf("%d", &num_items);
subtotal= 0;
for(int j= 1; j<= num_items; j++)
{
printf("Enter price of item %d: ", j);
scanf("%f", &price);
printf("Enter quantity: ");
scanf("%f", &quantity);
subtotal= subtotal+(price*quantity);
}
gst= subtotal*0.05;
total_bill= subtotal + gst;
printf("Customer %d Bill: Rs%f \n", i, total_bill);
total_revenue= total_revenue+total_bill;
if(total_bill > highest_bill)
{
highest_bill = total_bill;
}
do
{
printf("Enter feedback (1–5): ");
scanf("%d", &feedback);
if(feedback<1 || feedback>5)
{
printf("Invalid feedback! Please enter a value between 1 and 5.\n");
}
}
while(feedback<1 || feedback>5);
total_feedback= total_feedback+feedback;
}
float avg_feedback = total_feedback / num_customers;
printf("Total Revenue Today: Rs%f \n", total_revenue);
printf("Average Feedback Rating: Rs%f \n", avg_feedback);
printf("Highest Bill Amount: Rs%f \n", highest_bill);
return 0;
}
