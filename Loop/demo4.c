#include <stdio.h>
int main()
{
    do
    {
        int n = 0;
        int x = 0;
        int y = 0;
        printf("Nhap x: ");
        scanf("%d", &x);
        printf("Nhap y: ");
        scanf("%d", &y);
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("Ket qua x + y la: %d\n", x + y);
        }
        else if (n == 2)
        {
            printf("Ket qua x - y la: %d\n", x - y);
        }
        else if (n == 3)
        {
            printf("Ket qua x * y la: %d\n", x * y);
        }
        else if (n == 4)
        {
            if (y == 0)
            {
                printf("Khong the chia cho 0!\n");
            }
            else
            {
                printf("Ket qua x / y la: %d\n", x / y);
            }
        }
    } while (1);

    return 0;
}