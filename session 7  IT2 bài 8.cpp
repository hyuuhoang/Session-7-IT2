#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap vao so hang: ");
    scanf("%d", &rows);
    printf("Nhap vao so cot: ");
    scanf("%d", &cols);

    int matrix[rows][cols];


    printf("Nhap vao cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu tai vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa tran da nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

