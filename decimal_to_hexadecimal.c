#include <stdio.h>

int main()
{
    int n, a[16] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; n != 0; i++, n /= 16)
    {
        a[i] = n % 16;
    }

    printf("HexaDecimal Number: ");

    for (int i = 15; i >= 0; i--)
    {
        if (a[i] >= 10)
        {
            printf("%3c", 87 + a[i]);
        }
        else
        {
            printf("%3d", a[i]);
        }
    }
}