#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    int age;
    int marks;
    char name[100];
    char adress[100];

};

int Display(struct student stud[])
{
    int i;
    for(i=0;i<5;i++)
    {
    printf("<--------------------------<<<<Student %d>>>>--------------------------> \n",i);
    printf("Name: \n");
    puts(stud[i].name);
    printf("Adress: \n");

    puts(stud[i].adress);
    printf("Age %d \n",stud[i].age);
    printf("Roll no. %d \n",stud[i].rollno);
    printf("Marks %d \n",stud[i].marks);


    }
}


int main ()
{
int i;
struct student stud[5];
for(i=0;i<5;i++)
{


    printf("Enter the details of student %d \n",i);

    printf("Enter the name \n");
    scanf("%s", stud[i].name);

    printf("Enter the adress \n");
    scanf("%s", stud[i].adress);
    // gets(stud[i].adress);

    printf("Enter the age \n");
    scanf("%d",&stud[i].age);

    printf("Enter the roll no. \n");
    scanf("%d",&stud[i].rollno);


    printf("Enter the marks in 100 \n");
    scanf("%d",&stud[i].marks);

    // gets(stud[i].adress);
    // scanf("%s",&stud[i].adress);
}
    printf("The details of the students: \n");

Display(stud);
int sum =0,avg;
for(i=0;i<5;i++)
{
sum += stud[i].marks;
}
avg = sum/5;
printf("The average marks of 5 students  is %d \n",avg);
getchar();
return 0;
}