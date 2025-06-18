#include <stdio.h>
int main()
{
    int mark;
    printf("Nhap diem: ");
    scanf("%d", &mark);
    printf("Diem cua ban la: %d\n", mark);
    if (mark >= 8)
    {
        printf("Ban xep Loai A\n");
    }
    else if (mark >= 6)
    {
        printf("Ban xep Loai B\n");
    }
    else if (mark >= 4)
    {
        printf("Ban xep Loai C\n");
    }
    else
    {
        printf("Ban xep Loai D\n");
    }
    return 0;
}