#include<stdio.h>
#include<stdlib.h>
void main()
{
int k=0,i=0,a=1;
printf("MANAGEMENT SYSTEM APPLICATION");
char c;
char name[6][50],branch[6][30];
int age[10],year[10],semester[10];
float prev[10];
printf("\nEnter details of the Student:");
while(a==1)
{
printf("\n Enter Name of the Student: ");
scanf("%s",name[i]);
printf("\n Enter Age of the Student: ");
scanf("%d",&age[i]);
printf("\n Enter the Branch of the student: ");
scanf("%s",&branch[i]);
printf("\n Enter the Year of the student: ");
scanf("%d",&year[i]);
printf("\n Enter Your Semester: ");
scanf("%d",&semester[i]);
printf("\n Enter previous semester score: ");
scanf("%f",&prev[i]);
printf("\n Do you want to ADD more data...reply with y/n or Yes/No.");
scanf("%c",&c);
k++
if(c=='y'|| c=='Y')
{
printf("\n Enter the following details again:");
}
else
a=0;
i++;
}
printf("\n Enter the percentage above which you want to see the results: ");
scanf("%d",&marks);
for(i=0;i<k;i++)
{
if(prev[i]>marks)
{
printf("%d",prev[i]);
}
}
getch();
}