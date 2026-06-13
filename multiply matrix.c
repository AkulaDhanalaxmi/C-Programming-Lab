#include<stdio.h>

int main(){
    int a[100][100], b[100][100], c[100][100];
    int i, j, k, m1, n1, m2, n2;

    printf("Enter number of rows and columns of Matrix A:\n");
    scanf("%d%d", &m1, &n1);

    printf("Enter number of rows and columns of Matrix B:\n");
    scanf("%d%d", &m2, &n2);

    printf("Enter the elements of Matrix A:\n");
    for(i = 0; i < m1; i++){
        for(j = 0; j < n1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of Matrix B:\n");
    for(i = 0; i < m2; i++){
        for(j = 0; j < n2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    if(n1 == m2){
        // Initialize result matrix to zero
        for(i = 0; i < m1; i++){
            for(j = 0; j < n2; j++){
                c[i][j] = 0;
            }
        }

        // Matrix multiplication
        for(i = 0; i < m1; i++){
            for(j = 0; j < n2; j++){
                for(k = 0; k < n1; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The Multiplication is:\n");
        for(i = 0; i < m1; i++){
            for(j = 0; j < n2; j++){
                printf("%4d", c[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
    }

    return 0;
}

