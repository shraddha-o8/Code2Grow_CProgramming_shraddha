#include <stdio.h>
int main()
{
int total_customers, customer_count = 1;
int total_rooms = 0;
float total_revenue = 0, highest_bill = 0, lowest_bill = 0;
printf("========= Smart Hotel Room Booking System =========\n");
printf("Enter total number of customers: ");
scanf("%d", &total_customers);
while (customer_count <= total_customers)
{
int room_type, days;
char bfast, wifi, gym;
float rate = 0, base_fare = 0, add_services = 0;
float subtotal = 0, discount = 0, gst = 0, final_bill = 0;
printf("--- Customer %d ---\n", customer_count);
printf("Enter name: ");
scanf("%*s");
printf("Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): ");
scanf("%d", &room_type);
if (room_type == 1)
{
rate = 2500;
}
else if (room_type == 2)
{
rate = 4000;
}
else if (room_type == 3)
{
rate = 6000;
}
else
{
printf("Invalid room type! Defaulting to Deluxe Room.\n");
rate = 2500;
}
printf("Enter number of days: ");
scanf("%d", &days);
base_fare = rate * days;
printf("Breakfast (Y/N): ");
scanf(" %c", &bfast);
if (bfast == 'Y' || bfast == 'y')
{
add_services = add_services + (300 * days);
}
printf("Wi-Fi (Y/N): ");
scanf(" %c", &wifi);
if (wifi == 'Y' || wifi == 'y')
{
add_services = add_services + (100 * days);
}
printf("Gym Access (Y/N): ");
scanf(" %c", &gym);
if (gym == 'Y' || gym == 'y')
{
add_services = add_services + (200 * days);
}
subtotal = base_fare + add_services;
if (subtotal > 10000)
{
discount = 0.10 * subtotal;
}
gst = 0.12 * (subtotal - discount);
final_bill = (subtotal - discount) + gst;
printf("Base Fare: Rs.%.0f\n", base_fare);
printf("Additional Services: Rs.%.0f\n", add_services);
printf("Subtotal: Rs.%.0f\n", subtotal);
printf("Discount (10%%): Rs.%.0f\n", discount);
printf("GST (12%%): Rs.%.0f\n", gst);
printf("Final Bill: Rs.%.0f\n", final_bill);
total_rooms = total_rooms + 1;
total_revenue = total_revenue + final_bill;
if (customer_count == 1)
{
highest_bill = final_bill;
lowest_bill = final_bill;
}
else
{
if (final_bill > highest_bill)
{
highest_bill = final_bill;
}
if (final_bill < lowest_bill)
{
lowest_bill = final_bill;
}
}
customer_count++;
}
printf("========= Hotel Summary =========\n");
printf("Total Rooms Booked: %d\n", total_rooms);
printf("Total Revenue: Rs.%.0f\n", total_revenue);
printf("Highest Bill: Rs.%.0f\n", highest_bill);
printf("Lowest Bill: Rs.%.0f\n", lowest_bill);
printf("=================================\n");
return 0;
}
