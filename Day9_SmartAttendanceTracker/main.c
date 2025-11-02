#include <stdio.h>
int main()
{
int days_present,num_students,eligible=0,noteligible=0;
float percent,tot_attendance=0.0,avg_attendance=0.0;
int i=1;
printf("Enter total number of students: ");
scanf("%d",&num_students);
while(i<= num_students)
{
printf("Enter attendance for student %d(out of 30): ",i);
scanf("%d",&days_present);
percent=(days_present/30.0)*100;
tot_attendance= tot_attendance+percent;
if(percent>= 75.0)
{
printf("Student %d: %f- Eligible\n",i,percent);
eligible++;
}
else
{
printf("Student %d: %f- Not Eligible\n",i,percent);
noteligible++;
}
i++;
}
avg_attendance= tot_attendance/num_students;
printf("Class Summary:\n");
printf("Total Students: %d\n", num_students);
printf("Eligible Students: %d\n", eligible);
printf("Not Eligible: %d\n", noteligible);
printf("Average Attendance: %f \n", avg_attendance);
return 0;
}
