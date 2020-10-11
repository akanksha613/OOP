#include <stdio.h>
struct student
{
char name[50];
int roll;
float marks;
char address[50];
} s[100];

int main()
{
int i,n;
struct student s[100];

printf("Enter total of students:\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf(" Enter information of student %d:\n",i+1);
printf("Enter name: ");
scanf("%s", s[i].name);

printf("Enter roll number: ");
scanf("%d", &s[i].roll);

printf("Enter marks: ");
scanf("%f", &s[i].marks);

printf("Enter address: ");
scanf("%s", s[i].address);
}

printf("Displaying Information:\n");
for(i=0;i<n;i++)
{
printf(" %d no. student info\n",i+1);
printf("\tName:%s\n ",s[i].name);


printf("\t Roll number: %d\n",s[i].roll);

printf("\t Marks: %.1f\n\n",s[i].marks);

printf("\t Address:%s\n", s[i].address);

}

return 0;
}
