#include <stdio.h>
int main()
{
    int choice;
    int baudrate = 4800; // Default baud rate
    printf("Nhap lua chon (1-4): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        baudrate = 1200;
        break;
    case 2:
        baudrate = 2400;
        break;
    case 3:
        baudrate = 4800;
        break;
    case 4:
        baudrate = 9600;
        break;
    default:
        printf("Lua chon khong hop le.\n");
        return 1;
    }
    printf("Baud rate: %d\n", baudrate);

    return 0;
}