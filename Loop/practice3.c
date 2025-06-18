#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 1; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d \n", i);
            count++;
        }
    }
    printf("Co %d so chia het cho 3 trong khoang tu 1 den 30.\n", count);
    return 0;
}