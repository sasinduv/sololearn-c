#include <stdio.h>

int main() {
    int x[] = {1, 2, 3, 4};
    int* p = x;
    
    for(int i=0;i<4;i++) {
        printf("%d \n", *p);
        p++;
    }

    return 0;
}