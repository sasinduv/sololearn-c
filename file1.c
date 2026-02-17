#include <stdio.h>

int main() {
    FILE *fptr;
        fptr = fopen("file1.text" , "w");
        if (fptr == NULL ){
            printf("Error!");
            return -1;
        }
        fclose(fptr);
        return 0;

}