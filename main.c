#include <stdio.h>
#define N 5
typedef  int adjmat [N][N];
int path (adjmat x, int u, int v);


int main() {
    int i, j;
    int u=0, v=0, x=2;
    adjmat matrix;
    char temp[N + 1];
    for (i = 0; i < N; i++) {
        printf("please type a row of the matrix of length  %d \n", N);
        scanf("%s", temp);
        for (j = 0; j < N; j++) {
            matrix[i][j] = temp[j] - 48;

        }
    }
    printf("the matrix is:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d", matrix[i][j]);

        }
        printf("\n");
    }

    while(1) {
        printf("please insert u and v\n");

        x = scanf("%d%d", &u, &v);
        if((u == -1 && v== -1) || x!=2)
            break;
        int result = path(matrix, u, v);

        result == 1 ? printf("TRUE\n") : printf("FALSE\n");
    }

    return 0;
}