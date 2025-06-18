#include <stdio.h>
int main()
{
    int n;
    int temp = 0;
    while (1)
    {
        printf("Nhap n:");

        scanf("%d", &n);
        if (n == 1)
        {
            printf("Nhap nhiet do: ");
            scanf("%d", &temp);
            // Check if the temperature is within the valid range
            if (temp < 0 || temp > 50)
            {
                printf("Warning: Temperature!\n");
            }
            else if ((temp >= 0 && temp <= 15) || (temp > 30 && temp <= 50))
            {
                printf("OFF the light!\n");
            }
            else if (temp > 15 && temp <= 30)
            {
                printf("ON the light!\n");
            }
            else
            {
                printf("Invalid temperature input.\n");
            }
        }
        else
        {
            printf("Ket thuc chuong trinh.\n");
            break;
        }
    }

    return 0;
}
//----canh bao----[Tat den]----[Bat den]----[Tat den]----cảnh báo---
//-----------------0--------15---------30---------50----------------