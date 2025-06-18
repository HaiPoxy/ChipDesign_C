#include <stdio.h>
int phepCong(int x, int y)
{
    return x + y;
}
int phepTru(int x, int y)
{
    return x - y;
}
int phepNhan(int x, int y)
{
    return x * y;
}
int phepChia(int x, int y)
{
    if (y == 0)
    {
        printf("Khong the chia cho 0!\n");
        return 0; // Hoac co the tra ve mot gia tri khac de biet
    }
    return x / y;
}
int main()
{
    int n = 0;
    do
    {
        printf("1. Thuc hien phep cong x + y: \n");
        printf("2. Thuc hien phep tru x - y: \n");
        printf("3. Thuc hien phep nhan x * y: \n");
        printf("4. Thuc hien phep chia x / y: \n");
        printf("5. Thoat \n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &n);
    } while (n < 1 || n > 5);
    int x = 0;
    int y = 0;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);
    switch (n)
    {
    case 1:
        printf("Ket qua x + y la: %d\n", phepCong(x, y));
        break;
    case 2:
        printf("Ket qua x - y la: %d\n", phepTru(x, y));
        break;
    case 3:
        printf("Ket qua x * y la: %d\n", phepNhan(x, y));
        break;
    case 4:
        printf("Ket qua x / y la: %d\n", phepChia(x, y));
        break;
    case 5:
        break;
    }

    return 0;
}