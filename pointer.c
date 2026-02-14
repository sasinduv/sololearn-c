#include <stdio.h>
// A pointer is a variable that stores the memory address of another variable.
int main() {
    int age = 24;
    
    printf("%p", &age);
    
    int* p = &age;

    printf("%p", p); // This will print the same address as &age

    return 0;
}