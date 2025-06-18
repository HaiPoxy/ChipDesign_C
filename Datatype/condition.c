#include <stdio.h>
int main()
{
    int u;
    printf("Nhap u: ");
    scanf("%d", &u);
    if (u < 3)
    {
        printf("Pin yeu\n");
    }
    else
    {
        printf("Pin khong yeu\n");
    }
    return 0;
}