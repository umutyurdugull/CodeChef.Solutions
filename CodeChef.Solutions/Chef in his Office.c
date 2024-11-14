#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        int y;
        scanf("%d %d", &x, &y);
        int total = (x * 4) + (y);
        printf("%d\n", total);
    }
    return 0;
}
