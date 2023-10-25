#include <stdio.h>
#define MAX 10

int main(void) {
    int data[MAX];
    int i, j, tmp;
    FILE *fp;

    /* read in the data */
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1; // Return a non-zero value to indicate an error.
    }

    for (i = 0; i < MAX; i++) {
        if (fscanf(fp, "%d", &data[i]) != 1) {
            printf("Error reading data from the file.\n");
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);

    for (i = 0; i < MAX; i++) {
        printf("item #%d: %d\n", i, data[i]);
    }

    /* Simple sort algorithm */
    for (i = 0; i < MAX; i++) {
        for (j = i; j < MAX; j++) {
            if (data[i] > data[j]) {
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }

    printf("\nSorted data:\n");
    for (i = 0; i < MAX; i++) {
        printf("item #%d: %d\n", i, data[i]);
    }

    return 0;
}
