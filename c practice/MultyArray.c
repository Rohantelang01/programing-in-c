#include <stdio.h>

int main() {
    int Multyarray[5][6] = {{2, 3, 4}, {4, 3, 5}};

    // Get the length of the first dimension
    int rows = sizeof(Multyarray) / sizeof(Multyarray[0]);

    // Get the length of the second dimension (assuming all subarrays have the same length)
    int columns = sizeof(Multyarray[0]) / sizeof(Multyarray[0][0]);

    printf("Number of rows: %d\n", rows);
    printf("Number of columns: %d\n", columns);

    return 0;
}
