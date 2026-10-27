#include<stdio.h>
struct Student
{
    int rollno;
    char name[20];
    float mark;
};
int main()
{
    struct Student s;
    printf("enter roll number:");
    scanf("%d",&s.rollno);
    printf("enter name:");
    scanf("%19s",s.name);
    printf("enter mark:");
    scanf("%f",&s.mark);
    printf("\n Student Details \n");
    printf("roll number:%d\n",s.rollno);
    printf("name:%s\n",s.name);
    printf("mark:%2f\n",s.mark);
    return 0;

}