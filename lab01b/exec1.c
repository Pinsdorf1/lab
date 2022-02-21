#include <stdio.h>
 
int main()
{
 
    int matrix[5][5], row_index, column_index, x = 0, size = 5;
 
    // Get the square matrix
    for (row_index = 0; row_index < size; row_index++) {
        for (column_index = 0; column_index < size; column_index++) {
 
            matrix[row_index][column_index] = ++x;
        }
    }

    printf("A matriz\n");
    for (row_index = 0; row_index < size; row_index++) {
        for (column_index = 0; column_index < size; column_index++) {
 
            printf("%d\t", matrix[row_index][column_index]);
        }
 
        printf("\n");
    }

    printf("\nDiagonal principal:\n");
 
    for (row_index = 0; row_index < size; row_index++) {
        for (column_index = 0; column_index < size; column_index++) {
            if (row_index == column_index)
                printf("%d, ", matrix[row_index][column_index]);
        }
    }
 
    return 0;
}
