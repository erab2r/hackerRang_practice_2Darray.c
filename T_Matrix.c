#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int N;
    scanf("%d", &N);

    int a[N][N];
    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);

            if (i == j) {
                primarySum += a[i][j]; 
            }

            if (i + j == N - 1) {
                secondarySum += a[i][j]; 
            }
        }
    }

    int difference = abs(primarySum - secondarySum);
    printf("%d\n", difference);

    return 0;
}
