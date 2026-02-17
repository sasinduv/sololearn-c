#include <stdio.h>

int main() {
    FILE *fptr;
    int stock;
    char buffer[200], item[100], c;
    float price;

    /* myFile.txt: inventory\n100 widget0.29\End of list */
    fptr= fopen("myFile.txt", "w");

    /* write to file*/
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d, %s, %.2f\n", 100, "widget", 0.29);
    fputs("End of list", fptr);

    fclose(fptr);

    fptr = fopen ("myFile.txt", "r");
    fgets(buffer, 20,fptr); /* read first line of file */
    printf("%s", buffer); /* print first line of file */
    fscanf(fptr, "%d, %s, %f", &stock, item, &price); /* read second line of file */
    printf("%d, %s, %.2f\n", stock, item, price); /* print second line of file */
    while ((c = fgetc(fptr)) != EOF)
   
        printf("%c", c); /* print rest of file */
        fclose(fptr);
    return 0;
}