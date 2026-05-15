#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // open file in read mode
    fp = fopen("data.txt", "r");

    // check if file exists
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    // read string from file
    fgets(str, sizeof(str), fp);

    // display output
    printf("String from file: %s", str);

    // close file
    fclose(fp);

    return 0;
}