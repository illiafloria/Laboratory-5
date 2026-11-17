#include <stdio.h>
void matr(int a[], int b[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            b[i][j] = 2 * a[i] + 5 * a[j];
}
int main()
{
    int a[3], b[3][3];
    int i, j;
    printf("a1 a2 a3: ");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    matr(a, b);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%5d", b[i][j]);
        printf("\n");
    }
    return 0;
}