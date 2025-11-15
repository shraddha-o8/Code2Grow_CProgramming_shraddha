#include <stdio.h>
int main()
{
int attendance[5][5];
int marks[5][5];
char names[5][20];
int i,j;
int totalattendance[5]= {0};
int totalabsence[5]= {0};
int totalmarks[5]= {0};
float avgmarks[5];
int highest= -1, lowest= 999;
int highestindex= 0, lowestindex=0;
int topperindex=0,lowestmarksindex=0;
int choice;
printf("\nEnter names of 5 students: \n");
for(i=0;i<5;i++)
{
printf("Name of student %d: ",i+1);
scanf("%19s", names[i]);
}
printf("\nEnter attendance(1 = Present/0 = Absent):\n");
for(i=0;i<5;i++)
{
printf("\nAttendance for %s:\n",names[i]);
for(j=0;j<5;j++)
{
printf(" Subject %d: ", j+1);
scanf("%d",&attendance[i][j]);
}
}
printf("\nEnter marks: \n");
for(i=0; i<5;i++)
{
printf("\nEnter for %s:\n",names[i]);
for(j=0;j<5;j++)
{
printf(" Subject %d: ", j+1);
scanf("%d",&marks[i][j]);
}
}
for(i=0;i<5;i++)
{
totalattendance[i]= 0;
totalmarks[i]= 0;
for(j=0;j<5;j++)
{
totalattendance[i]+= attendance[i][j];
totalmarks[i]+= marks[i][j];
}
totalabsence[i]= 5-totalattendance[i];
avgmarks[i]= totalmarks[i]/5.0;
if(totalattendance[i]>highest)
{
highest= totalattendance[i];
highestindex= i;
}
if(totalattendance[i]<lowest)
{
lowest= totalattendance[i];
lowestindex= i;
}
for(i=1;i<5;i++)
{
if(totalmarks[i]>totalmarks[topperindex])
{
topperindex=i;
}
if(totalmarks[i] < totalmarks[lowestmarksindex])
{
lowestmarksindex= i;
}
}
}
while(1)
{
printf("\n========MENU========\n");
printf("1. Display Attendance Matrix\n");
printf("2. Display Marks Matrix\n");
printf("3. Attendance Report\n");
printf("4. Performance Report\n");
printf("5. Grade Report\n");
printf("6. Exit\n");
printf("======================\n");
printf("Enter your choice: ");
scanf("%d",&choice);
if(choice == 1)
{
printf("\nAttendance Matrix:\n");
for(i = 0; i < 5; i++)
{
printf("%s: ", names[i]);
for(j = 0; j < 5; j++)
{
printf("%d ", attendance[i][j]);
}
printf("\n");
}
}
else if(choice == 2)
{
printf("\nMarks Matrix:\n");
for(i = 0; i < 5; i++)
{
printf("%s: ", names[i]);
for(j = 0; j < 5; j++)
{
printf("%d ", marks[i][j]);
}
printf("\n");
}
}
else if(choice == 3)
{
printf("\n===== ATTENDANCE REPORT =====\n");
for(i = 0; i < 5; i++)
{
printf("%s  Present: %d | Absent: %d\n",
names[i], totalattendance[i], totalabsence[i]);
}
printf("\nHighest Attendance: %s (%d)\n",
names[highestindex], highest);
printf("Lowest Attendance: %s (%d)\n",
names[lowestindex], lowest);
}
else if(choice == 4)
{
printf("\n===== PERFORMANCE REPORT =====\n");
for(i = 0; i < 5; i++)
{
printf("%s Total Marks: %d | Average: %.2f\n",names[i], totalmarks[i], avgmarks[i]);
}
printf("\nClass Topper: %s (%d)\n",names[topperindex], totalmarks[topperindex]);
printf("Lowest Performer: %s (%d)\n",names[lowestmarksindex], totalmarks[lowestmarksindex]);
}
else if(choice == 5)
{
printf("\n===== GRADE REPORT =====\n");
for(i = 0; i < 5; i++)
{
char grade;
if(avgmarks[i] >= 90) grade = 'A';
else if(avgmarks[i] >= 80) grade = 'A';
else if(avgmarks[i] >= 70) grade = 'B';
else if(avgmarks[i] >= 60) grade = 'C';
else if(avgmarks[i] >= 50) grade = 'D';
else grade = 'F';
printf("%s Average: %.2f | Grade: %c\n",
names[i], avgmarks[i], grade);
}
}
else if(choice == 6)
{
printf("\nExiting program...\n");
break;
}
else
{
printf("\nInvalid choice! Try again.\n");
}
}
return 0;
}
