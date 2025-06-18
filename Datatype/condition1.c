#include <stdio.h>
int main()
{
    int cambien1, cambien2;
    printf("Nhap cam bien 1: ");
    scanf("%d", &cambien1);
    printf("Nhap cam bien 2: ");
    scanf("%d", &cambien2);
    if (cambien1 > cambien2)
    {
        printf("Cam bien 1 lon hon\n");
    }
    else
    {
        printf("Cam bien 2 lon hon\n");
    }
    return 0;
}