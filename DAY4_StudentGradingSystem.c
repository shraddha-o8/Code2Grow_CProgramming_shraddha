#include <stdio.h>
int main()
{
float m1,m2,m3,m4,m5,attendance;
printf("Enter marks of 1st subject:\n");
scanf("%f",&m1);
printf("Enter marks of 2nd subject:\n");
scanf("%f",&m2);
printf("Enter marks of 3rd subject:\n");
scanf("%f",&m3);
printf("Enter marks of 4th subject:\n");
scanf("%f",&m4);
printf("Enter marks of 5th subject:\n");
scanf("%f",&m5);
printf("Enter attendance percentage:\n");
scanf("%f",&attendance);
float percent= (m1+m2+m3+m4+m5)/5.0;
if((m1>0&&m1<101)&&(m2>0&&m2<101)&&(m3>0&&m3<101)&&(m4>0&&m4<101)&&(m5>0&&m5<101))
{
if(attendance<75)
{
printf("FAIL(F)\n");
}
else if(attendance>=75)
{
if(percent>=90)
{
printf("Total Percentage:%f \n",percent);
printf("Attendance:%f \n",attendance);
printf("Final Grade: A+ \n");
printf("Remarks: Excellent \n");
}
else if(percent>=80 && percent<=89)
{
printf("Total Percentage:%f \n",percent);
printf("Attendance:%f \n",attendance);
printf("Final Grade: A \n");
printf("Remarks: Very Good \n");
}
else if(percent>=70 && percent<=79)
{
printf("Total Percentage:%f \n",percent);
printf("Attendance:%f \n",attendance);
printf("Final Grade: B \n");
printf("Remarks: Good \n");
}
else if(percent>=60 && percent<=69)
{
printf("Total Percentage:%f \n",percent);
printf("Attendance:%f \n",attendance);
printf("Final Grade: C \n");
printf("Remarks: Average \n");
}
else if(percent>=50 && percent<=59)
{
printf("Total Percentage:%f \n",percent);
printf("Attendance:%f \n",attendance);
printf("Final Grade: D \n");
printf("Remarks: Pass \n");
}
else if(percent<50)
{
if((percent>=45 && percent<=49)&&(attendance>=90))
{
float marks = (m1+m2+m3+m4+m5+5)/5.0;
printf("Total Percentage:%f \n",marks);
printf("Attendance:%f \n",attendance);
printf("Final Grade: D \n");
printf("Remarks: Pass \n");
}
else
{
printf("Total Percentage:%f \n",percent);
printf("Attendance:%f \n",attendance);
printf("Final Grade: F \n");
printf("Remarks: Fail \n");
}
}
}
}
else
{
printf("Invalid Marks \n");
}
return 0;
}

