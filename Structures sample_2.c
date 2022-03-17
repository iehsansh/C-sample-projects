#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char *FirstName;
    char *LastName;
    float gpa;
}Student;

void DisplayStudentInformation(Student stu);
void DisplayStudentInformation2(Student *pstu);

int main()
{

    Student stu1;
    stu1.id=101;
    stu1.FirstName="Ali";
    stu1.LastName="Alavi";
    stu1.gpa=18;

    Student stu2={102,"Reza","Razavi",19};

    printf("Using First Function (By Value):\n");
    DisplayStudentInformation(stu1);
    DisplayStudentInformation(stu2);
    DisplayStudentInformation(stu1);

    printf("--------------------------------------------------\n");

    printf("Using Second Function (By Reference):\n");
    DisplayStudentInformation2(&stu1);
    DisplayStudentInformation2(&stu2);
    DisplayStudentInformation2(&stu1);

    return 0;
}

void DisplayStudentInformation(Student stu)
{
    printf("Student information:\n");
    printf("        ID: %d\n", stu.id);
    printf("First Name: %s\n", stu.FirstName);
    printf(" Last Name: %s\n", stu.LastName);
    printf("       GPA: %.2f\n", stu.gpa);
    stu.id+=1000;
    printf("    New ID: %d\n", stu.id);
    printf("\n");
}

void DisplayStudentInformation2(Student *pstu)
{
    printf("Student information:\n");
    printf("        ID: %d\n", pstu->id);
    printf("First Name: %s\n", pstu->FirstName);
    printf(" Last Name: %s\n", pstu->LastName);
    printf("       GPA: %.2f\n", pstu->gpa);
    pstu->id+=1000;
    printf("    New ID: %d\n", pstu->id);
    printf("\n");
}
