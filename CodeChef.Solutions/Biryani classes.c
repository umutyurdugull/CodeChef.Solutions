#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int total = X * Y;
        printf("%d\n", total);
    }
    return 0;
}