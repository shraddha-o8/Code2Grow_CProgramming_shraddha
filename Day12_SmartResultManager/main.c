#include <stdio.h>
int main()
{
int num_s, i, choice;
float m1, m2, m3, total, avg;
float classtotal = 0, classavg = 0;
float highestavg = 0, lowestavg = 100;
int pass = 0, fail = 0;
int student_count = 0;
float s1_avg, s2_avg, s3_avg;
char s1_grade, s2_grade, s3_grade;
printf("Smart Student Result Management\n");
printf("Enter number of students: ");
scanf("%d", &num_s);
i = 1;
while (i <= num_s)
{
printf("\n--- Student %d ---\n", i);
printf("Enter marks for Subject 1: ");
scanf("%f", &m1);
printf("Enter marks for Subject 2: ");
scanf("%f", &m2);
printf("Enter marks for Subject 3: ");
scanf("%f", &m3);
total = m1 + m2 + m3;
avg = total / 3.0;
char grade;
if(avg >= 90)
grade = 'A';
else if(avg >= 80)
grade = 'A';
else if(avg >= 70)
grade = 'B';
else if(avg >= 60)
grade = 'C';
else if (avg >= 50)
grade = 'D';
else
grade = 'F';
if(avg >= 50)
pass++;
else
fail++;
if(avg > highestavg)
highestavg = avg;
if(avg < lowestavg)
lowestavg = avg;
classtotal += avg;
if(i == 1)
{
s1_avg = avg;
s1_grade = grade;
}
else if(i == 2)
{
s2_avg = avg;
s2_grade = grade;
}
else if(i == 3)
{
s3_avg = avg;
s3_grade = grade;
}
i++;
}
classavg = classtotal / num_s;
do
{
printf("\n========= Menu =========\n");
printf("1. View All Results\n");
printf("2. View Class Summary\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if(choice == 1)
{
printf("\n--- Result Sheet ---\n");
if(num_s >= 1)
printf("Student 1: Avg = %.1f → Grade %c\n", s1_avg, s1_grade);
if(num_s >= 2)
printf("Student 2: Avg = %.1f → Grade %c\n", s2_avg, s2_grade);
if(num_s >= 3)
printf("Student 3: Avg = %.1f → Grade %c\n", s3_avg, s3_grade);
}
else if(choice == 2)
{
printf("\n--- Class Summary ---\n");
printf("Total Students: %d\n", num_s);
printf("Passed: %d\n", pass);
printf("Failed: %d\n", fail);
printf("Class Average: %.1f\n", classavg);
printf("Highest Average: %.1f\n", highestavg);
printf("Lowest Average: %.1f\n", lowestavg);
}
else if(choice == 3)
{
printf("Thank you! Exiting system...\n");
}
else
{
printf("Invalid choice. Try again.\n");
}
}
while (choice != 3);
return 0;
}
