#include <stdio.h>
#include <string.h>
struct Student
{
    int rn;
    float marks;
    char name[10];
};
void display(struct Student s[3])
{
    printf("Name       Roll number     Marks\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s          %d          %.2f\n", s[i].name, s[i].rn, s[i].marks);
    }
}

int main()
{
    struct Student s[3];
    printf("Enter the name, roll number, marks of the students:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%d%f", s[i].name, &s[i].rn, &s[i].marks);
    }

    display(s);
    return 0;
}
