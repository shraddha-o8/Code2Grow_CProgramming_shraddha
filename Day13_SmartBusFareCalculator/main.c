#include <stdio.h>
int main()
{
int totalpassengers, i;
char name;
int age, time;
float distance;
float basefare, finalfare;
float totalrevenue = 0, highestfare = 0, lowestfare = 0;
printf("========= SRM Smart Bus Fare Calculator =========\n");
printf("Enter number of passengers: ");
scanf("%d", &totalpassengers);
for(i = 1; i <= totalpassengers; i++)
{
printf("--- Passenger %d ---\n", i);
printf("Enter name (single character): ");
scanf(" %c", &name);
printf("Enter age: ");
scanf("%d", &age);
printf("Enter distance (in km): ");
scanf("%f", &distance);
printf("Enter travel time (24-hour format): ");
scanf("%d", &time);
basefare = 10 * distance;
finalfare = basefare;
if(age < 12)
{
finalfare = finalfare * 0.5;
printf("Passenger: %c | Base Fare: Rs.%.0f | Child Discount Applied", name, basefare);
}
else if(age >= 60)
{
finalfare = finalfare * 0.7;
printf("Passenger: %c | Base Fare: Rs.%.0f | Senior Citizen Discount Applied", name, basefare);
}
else
{
printf("Passenger: %c | Base Fare: Rs.%.0f", name, basefare);
}
if((time >= 8 && time <= 10) || (time >= 17 && time <= 20))
{
finalfare = finalfare * 1.2;
printf(" | Peak Hour Surcharge Applied");
}
if(finalfare < 20)
{
finalfare = 20;
}
printf(" | Final Fare: Rs.%.0f\n", finalfare);
totalrevenue += finalfare;
if(i == 1)
{
highestfare = lowestfare = finalfare;
}
else
{
if(finalfare > highestfare)
highestfare = finalfare;
if(finalfare < lowestfare)
lowestfare = finalfare;
}
}
printf("========= Daily Summary =========\n");
printf("Total Passengers: %d\n", totalpassengers);
printf("Total Revenue Collected: Rs.%.0f\n", totalrevenue);
printf("Highest Fare: Rs.%.0f\n", highestfare);
printf("Lowest Fare: Rs.%.0f\n", lowestfare);
printf("=================================\n");
return 0;
}
