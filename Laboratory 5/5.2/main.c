#include <stdio.h>
void rows(int b[10][10], int n, int c[])
{
    int i, j;
    for (i = 0; i < n; i++) {
        c[i] = 0;
        for (j = 0; j < n; j++)
            c[i] += b[i][j];
    }
}
void cols(int b[10][10], int n, int c[])
{
    int i, j;
    for (j = 0; j < n; j++) {
        c[j] = 0;
        for (i = 0; i < n; i++)
            c[j] += b[i][j];
    }
}
int main()
{
    int b[10][10], c[10];
    int n, i, j;
    printf("n = ");
    scanf("%d", &n);
    printf("Введіть таблицю B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    rows(b, n, c);
    printf("1) Суми рядків: ");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");
    cols(b, n, c);
    printf("2) Суми стовпчиків: ");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}