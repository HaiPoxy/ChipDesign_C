#include <stdio.h>
int main()
{
    int temp = 0;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {

        printf("Nhap so thu %d: ", i);
        scanf("%d", &temp);
        sum += temp;
    }
    float average = (float)temp / 10;
    printf("Trung binh cong la: %.2f\n", average);
    return 0;
}