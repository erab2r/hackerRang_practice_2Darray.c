#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int N;
    scanf("%d", &N);

    int a[N][N];
    int primary_Sum = 0, secondary_Sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);

            if (i == j) {
                primary_Sum += a[i][j]; 
            }

            if (i + j == N - 1) {
                secondary_Sum += a[i][j]; 
            }
        }
    }

    int difference = abs(primary_Sum - secondary_Sum);
    printf("%d\n", difference);

    return 0;
}
