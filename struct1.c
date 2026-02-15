#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[20];
};

int main() {

    struct student s1 = {20, 90, "Alice"};
    struct student s2;

    s2.age = 22;
    s2.grade = 85;
    sprintf(s2.name, "Bob");

    printf("Student 1:name: %s, age: %d, grade: %d\n", s1.name, s1.age, s1.grade);
    printf("Student 2:name: %s, age: %d, grade: %d\n", s2.name, s2.age, s2.grade);
}