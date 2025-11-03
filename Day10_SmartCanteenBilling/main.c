#include <stdio.h>
int main()
{
int tot_customers;
float tot_revenue = 0;
printf("=========== Smart Canteen Billing System ===========\n");
printf("Enter total number of customers: ");
scanf("%d", &tot_customers);
int customer_c = 1;
while(customer_c <= tot_customers)
{
int num_items;
printf("\n--- Customer %d ---\n", customer_c);
printf("Enter number of items: ");
scanf("%d", &num_items);
int itemcode, quantity;
float price = 0, total = 0, discount = 0, finalbill = 0;
int i = 1;
printf("\nCode\tItem Name\tPrice (₹)\n");
printf("1\tSandwich\t80\n");
printf("2\tBurger\t\t120\n");
printf("3\tPizza Slice\t150\n");
printf("4\tCoffee\t\t60\n");
printf("5\tJuice\t\t50\n\n");
printf("Customer %d Bill:\n", customer_c);
while(i <= num_items)
{
printf("Enter item code: ");
scanf("%d", &itemcode);
printf("Enter quantity: ");
scanf("%d", &quantity);
if(itemcode == 1)
{
price = 80 * quantity;
printf("Sandwich x %d = Rs.%.2f\n", quantity, price);
}
else if(itemcode == 2)
{
price = 120 * quantity;
printf("Burger x %d = Rs.%.2f\n", quantity, price);
}
else if(itemcode == 3)
{
price = 150 * quantity;
printf("Pizza Slice x %d = Rs.%.2f\n", quantity, price);
}
else if(itemcode == 4)
{
price = 60 * quantity;
printf("Coffee x %d = Rs.%.2f\n", quantity, price);
}
else if(itemcode == 5)
{
price = 50 * quantity;
printf("Juice x %d = Rs.%.2f\n", quantity, price);
}
else
{
printf("Invalid item code! Skipping...\n");
price = 0;
}
total += price;
i++;
}
printf("Total: Rs.%.2f\n", total);
if(total > 500)
{
discount = total * 0.10;
printf("Discount (10%%): Rs.%.2f\n", discount);
finalbill = total - discount;
}
else
{
finalbill = total;
}
printf("Final Bill: Rs.%.2f\n", finalbill);
tot_revenue += finalbill;
customer_c++;
}
printf("\n================== Canteen Summary ==================\n");
printf("Total Customers Served: %d\n", tot_customers);
printf("Total Revenue: Rs.%.2f\n", tot_revenue);
printf("=====================================================\n");
return 0;
}
