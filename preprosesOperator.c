#include <stdio.h>

#define TO_STR(x) #x

int main() {
    printf("%s\n", TO_STR(Hello World!));
    return 0;
}