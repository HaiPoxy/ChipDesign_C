#include <stdio.h>
int main()
{
    int n;
    int temp = 0;
    printf("Nhap nhiet do : ");
    scanf("%d", &temp);
    switch (temp)
    {
    case 0 ... 15:
        printf("OFF the light!\n");
        break;
    case 30 ... 50:
        printf("OFF the light!\n");
        break;
    case 16 ... 29:
        printf("ON the light!\n");
        break;
    default:
        printf("Exit the program.\n");
        break;
    }

    return 0;
}