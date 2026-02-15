#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours;
} course ;

int main() {
    course cs1;
    course cs2 = {101, "Data Structures", 3.0};

    cs1.id = 102;
    cs1.hours = 4.0;
    strcpy(cs1.title, "Algorithms");

    printf("Course 1: id: %d, title: %s, hours: %.1f\n", cs1.id, cs1.title, cs1.hours);
    printf("Course 2: id: %d, title: %s, hours: %.1f\n", cs2.id, cs2.title, cs2.hours);
    
}