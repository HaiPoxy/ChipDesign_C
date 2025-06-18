// Code chuyển hệ từ hệ cơ số 10 sang hệ cơ số 2
#include <stdio.h>

int DecimalToBinary(int n)
{
    if (n != 0)
    {
        DecimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int n;
    printf("Nhap so thap phan: ");
    scanf("%d", &n);
    printf("So nhi phan tuong ung la: ");
    DecimalToBinary(n);
    return 0;
}