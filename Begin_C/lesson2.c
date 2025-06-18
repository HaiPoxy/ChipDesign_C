#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Nhap A: ");
    scanf("%d", &a);
    printf("Nhap B: ");
    scanf("%d", &b);
    printf("Nhap C: ");
    scanf("%d", &c);
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    if (a > b)
    {
        if (a > c)
        {
            printf("So lon nhat la: %d\n", a);
        }
        else // b < a < c
        {
            printf("So lon nhat la: %d\n", c);
        }
    }
    else // b > a
    {
        if (b > c)
        {
            printf("So lon nhat la: %d\n", b);
        }
        else // c > b > a
        {
            printf("So lon nhat la: %d\n", c);
        }
    }

    return 0;
}