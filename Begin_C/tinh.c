#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap A: ");
    scanf("%d", &a);
    printf("Nhap B: ");
    scanf("%d", &b);
    printf("A + B = %d\n", a + b);
    printf("A - B = %d\n", a - b);
    printf("A * B = %d\n", a * b);
    printf("A / B = %d\n", a / b);
    printf("A %% B = %d\n", a % b);
    return 0;
}