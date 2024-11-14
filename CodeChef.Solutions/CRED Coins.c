#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int totalCredit = X * Y;
        int count = totalCredit / 100;
        printf("%d\n", count);
    }

    return 0;
}