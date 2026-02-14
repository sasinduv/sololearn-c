#include <stdio.h>

void divide(int* x, int* y, int by) {
    *x /= by;
    *y /= by;
}
int main() {
    int x = 4200;
    int y = 670;

    divide(&x, &y, 10);
    
    printf("%d %d", x, y);

    return 0;
}