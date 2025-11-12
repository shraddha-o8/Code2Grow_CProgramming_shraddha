#include <stdio.h>
int main()
{
int prices[5] = {50, 30, 80, 120, 60};
int total_sold[5] = {0, 0, 0, 0, 0};
int customers, num_items, item_No, qty;
int revenue = 0, itemsold = 0;
int mostordered = 0, leastordered = 0;
printf("========= Café Order Management System =========\n");
printf("Menu:\n");
printf("1. Coffee - Rs.50\n");
printf("2. Tea - Rs.30\n");
printf("3. Sandwich - Rs.80\n");
printf("4. Burger - Rs.120\n");
printf("5. Pastry - Rs.60\n");
printf("Enter total number of customers: ");
scanf("%d", &customers);
if(customers < 1 || customers > 10)
{
printf("Number of customers must be between 1 and 10!\n");
return 0;
}
for(int i = 0; i < customers; i++)
{
int customertotal = 0;
printf("\n--- Customer %d ---\n", i + 1);
printf("Enter number of items: ");
scanf("%d", &num_items);
if(num_items < 1)
{
printf("Invalid number of items!\n");
return 0;
}
for(int j = 0; j < num_items; j++)
{
printf("Enter item number and quantity: ");
scanf("%d %d", &item_No, &qty);
if(item_No >= 1 && item_No <= 5 && qty > 0)
{
customertotal += prices[item_No - 1] * qty;
total_sold[item_No - 1] += qty;
itemsold += qty;
}
else
{
printf("Invalid input! Try again.\n");
j--;
}
}
printf("Total Bill for Customer %d: Rs.%d\n", i + 1, customertotal);
revenue += customertotal;
}
mostordered = 0;
leastordered = -1;
for(int i = 1; i < 5; i++)
{
if(total_sold[i] > total_sold[mostordered])
mostordered = i;
if(leastordered == -1 && total_sold[i] > 0)
leastordered = i;
else if (leastordered != -1 && total_sold[i] > 0 && total_sold[i] < total_sold[leastordered])
leastordered = i;
}
printf("\n========= Café Summary =========\n");
printf("Total Revenue: Rs.%d\n", revenue);
printf("Total Items Sold: %d\n", itemsold);
if(mostordered == 0)
printf("Most Ordered Item: Coffee\n");
else if(mostordered == 1)
printf("Most Ordered Item: Tea\n");
else if(mostordered == 2)
printf("Most Ordered Item: Sandwich\n");
else if(mostordered == 3)
printf("Most Ordered Item: Burger\n");
else if(mostordered == 4)
printf("Most Ordered Item: Pastry\n");
if(leastordered == 0)
printf("Least Ordered Item: Coffee\n");
else if(leastordered == 1)
printf("Least Ordered Item: Tea\n");
else if(leastordered == 2)
printf("Least Ordered Item: Sandwich\n");
else if(leastordered == 3)
printf("Least Ordered Item: Burger\n");
else if(leastordered == 4)
printf("Least Ordered Item: Pastry\n");
printf("==================================\n");
return 0;
}
