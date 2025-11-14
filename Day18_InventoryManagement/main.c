#include <stdio.h>
int main()
{
int productID[10], qty[10];
float price[10];
int choice, num_products = 0;
int i, searchID, foundindex;
float totalvalue = 0.0, highest = 0.0, lowest = 1000000.0;
int highestindex, lowestindex;
while (1)
{
printf("\n=========Inventory Management System=========\n");
printf("1. Input product details\n");
printf("2. Display all products\n");
printf("3. Calculate total inventory value\n");
printf("4. Find product with highest and lowest value\n");
printf("5. Search for a product by ID\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 1)
{
if (num_products >= 10)
{
printf("Inventory is full! Cannot add more products.\n");
}
else
{
printf("Enter product ID: ");
scanf("%d", &productID[num_products]);
printf("Enter product name: ");
char name[50];
scanf("%s", name);
printf("Enter quantity in stock: ");
scanf("%d", &qty[num_products]);
printf("Enter price per item: ");
scanf("%f", &price[num_products]);
num_products++;
printf("Product added successfully!\n");
}
}
else if (choice == 2)
{
if (num_products == 0)
{
printf("No products available to display.\n");
}
else
{
printf("\nProduct List:\n");
for (i = 0; i < num_products; i++)
{
printf("ID: %d, Quantity: %d, Price: %.2f\n", productID[i], qty[i], price[i]);
}
}
}
else if (choice == 3)
{
if (num_products == 0)
{
printf("No products available to calculate total inventory value.\n");
}
else
{
totalvalue = 0.0;
for (i = 0; i < num_products; i++)
{
totalvalue += qty[i] * price[i];
}
printf("Total Inventory Value: %.2f\n", totalvalue);
}
}
else if (choice == 4)
{
if (num_products == 0)
{
printf("No products available to calculate highest and lowest values.\n");
}
else
{
highest = 0.0;
lowest = 1000000.0;
highestindex = -1;
lowestindex = -1;
for (i = 0; i < num_products; i++)
{
float productvalue = qty[i] * price[i];
if (productvalue > highest)
{
highest = productvalue;
highestindex = i;
}
if (productvalue < lowest)
{
lowest = productvalue;
lowestindex = i;
}
}
printf("Product with highest value: ID: %d, Quantity: %d, Price: %.2f, Total value: %.2f\n",
productID[highestindex], qty[highestindex], price[highestindex], highest);
printf("Product with lowest value: ID: %d, Quantity: %d, Price: %.2f, Total value: %.2f\n",
productID[lowestindex], qty[lowestindex], price[lowestindex], lowest);
}
}
else if (choice == 5)
{
printf("Enter product ID to search: ");
scanf("%d", &searchID);
foundindex = -1;
for (i = 0; i < num_products; i++)
{
if (productID[i] == searchID)
{
foundindex = i;
break;
}
}
if (foundindex == -1)
{
printf("Product with ID %d not found.\n", searchID);
}
else
{
printf("Product found:\n");
printf("ID: %d, Quantity: %d, Price: %.2f\n", productID[foundindex], qty[foundindex], price[foundindex]);
}
}
else if (choice == 6)
{
printf("Thank You For Working With Us!\n");
break;
}
else
{
printf("Invalid choice! Try again.\n");
}
}
printf("==============================\n");
return 0;
}
