#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);
    printf("Nhap z: ");
    scanf("%d", &z);
    // Tính tổng của x, y, z
    int result = x + y + z;
    printf("Tong cua x, y, z: %d\n", result);
    return 0;
}