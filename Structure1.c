#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    float marks;
    char name[12];
};
void main(){
 struct Student s[3];
 printf("Enter the name, roll number, marks of the students:\n");
 for (int i = 0; i < 3; i++)
 {
    scanf("%s%d%f",s[i].name,&s[i].rollno,&s[i].marks);
 }
 printf("Name\tRoll number\tMarks\n");
 for (int i = 0; i < 3; i++)
 {
    printf("%s\t%d\t%.2f\n",s[i].name,s[i].rollno,s[i].marks);
 }
 
 

}