#include <stdio.h>
#include <string.h>

struct student{
    int age;
    int grade;
    char name[20];
} ;

void showStudentDate ( struct student *st) {
    printf("\nStudent:\n");
        printf("Name: %s\n", st->name);
        printf("Age: %d\n", st->age);
        printf("Grade: %d\n", st->grade);

    }

int main() {

    struct student st1;
    struct student st2;

    strcpy(st1.name, "Alice");
    st1.age = 20;
    st1.grade = 90;

    strcpy(st2.name, "Bob");
    st2.age = 22;   
    st2.grade = 85;

    showStudentDate(&st1);
    showStudentDate(&st2);

    return 0;
}