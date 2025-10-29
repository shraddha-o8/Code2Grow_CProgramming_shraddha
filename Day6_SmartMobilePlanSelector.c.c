#include <stdio.h>
#include <string.h>
int main()
{
int data,student_check,corporate_check,discount;
float basecost,dailydata,extradata,total,tot,extradatacost;
char plan[10];
printf("Enter total data used(GB):");
scanf("%d",&data);
if(data<=100)
{
printf("Are you a student?(1-Yes/0-No):");
scanf("%d",&student_check);
printf("Corporate user?(1-Yes/0-No):");
scanf("%d",&corporate_check);
if(data<=30)
{
strcpy(plan,"Silver");
basecost=299.0;
extradata= data-30.0;
(extradata<0)? extradata=0: extradata==extradata;
extradatacost=extradata*50.0;
}
else if(data>30 && data<=60)
{
strcpy(plan,"Gold");
basecost=499.0;
extradata= data-60.0;
(extradata<0)? extradata=0: extradata==extradata;
extradatacost=extradata*40.0;
}
else if(data>60)
{
strcpy(plan,"Platinum");
basecost=799.0;
extradata= data-90.0;
(extradata<0)? extradata=0: extradata==extradata;
extradatacost= extradata*30;
}
tot= basecost+extradatacost;
if(student_check==1 && corporate_check==1)
{
discount=15;
}
else if(student_check==1)
{
discount=15;
}
else if(corporate_check==1)
{
discount=10;
}
float discount_amt = tot*discount/100.0;
total= tot-discount_amt;
printf("User Plan Summary:\n");
printf("Data Used(GB):%d \n",data);
printf("Selected Plan:%s \n",plan);
printf("Base Cost:%f \n",basecost);
printf("Extra Data:%f \n",extradata);
printf("Total(before discount):%f \n",tot);
printf("Discount Applied: %d \n",discount);
printf("Final Bill:%f \n",total);
}
else
{
printf("Excessive Usage- Plan Not Allowed \n");
}
return 0;
}
