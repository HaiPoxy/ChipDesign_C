#include <stdio.h>
int main()
{

    while (1)
    {
        int x = 0;
        int y = 0;
        printf("Nhap x: ");
        scanf("%d", &x);
        printf("Nhap y: ");
        scanf("%d", &y);
        int sum = x + y;
        printf("Tong cua %d va %d la: %d\n", x, y, sum);
    }
    return 0;
}