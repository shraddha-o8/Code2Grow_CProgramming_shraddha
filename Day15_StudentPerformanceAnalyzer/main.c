#include <stdio.h>
int main()
{
int num, i;
int marks[10];
int highest, lowest, total = 0;
int pass= 0, fail= 0;
int Aplus= 0, A= 0, B= 0, C= 0, D= 0, F= 0;
float avg;
printf("========= Student Performance Analyzer =========\n");
printf("Enter total number of students: ");
scanf("%d", &num);
if(num < 1 || num > 10)
{
printf("Number of Students must be below 10!\n");
return 0;
}
printf("Enter marks for each student:\n");
for(i = 0; i < num; i++)
{
printf("Student %d: ", i + 1);
scanf("%d", &marks[i]);
if(marks[i] < 0 || marks[i] > 100)
{
printf("Invalid marks! Must be between 0 and 100.\n");
return 0;
}
}
highest = marks[0];
lowest = marks[0];
for(i = 0; i < num; i++)
{
total += marks[i];
if(marks[i] > highest)
highest = marks[i];
if(marks[i] < lowest)
lowest = marks[i];
if(marks[i] >= 90)
{
Aplus++;
pass++;
}
else if(marks[i] >= 80)
{
A++;
pass++;
}
else if(marks[i] >= 70)
{
B++;
pass++;
}
else if(marks[i] >= 60)
{
C++;
pass++;
}
else if(marks[i] >= 50)
{
D++;
pass++;
}
else
{
F++;
fail++;
}
}
avg = (float)total / num;
printf("========= Result Summary =========\n");
printf("Average Marks: %.2f\n", avg);
printf("Highest Marks: %d\n", highest);
printf("Lowest Marks: %d\n", lowest);
printf("Total Passed Students: %d\n", pass);
printf("Total Failed Students: %d\n", fail);
printf("Grade Distribution:\n");
printf("A+ : %d\n", Aplus);
printf("A  : %d\n", A);
printf("B  : %d\n", B);
printf("C  : %d\n", C);
printf("D  : %d\n", D);
printf("Fail: %d\n", F);
printf("==================================\n");
return 0;
}
