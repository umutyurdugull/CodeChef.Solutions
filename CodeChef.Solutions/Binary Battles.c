#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, x;
        scanf("%d %d %d", &n, &a, &b);
        int rounds = 0;
        int temp_n = n;
        while (temp_n > 1)
        {
            temp_n /= 2;
            rounds++;
        }

        x = (rounds * a) + ((rounds - 1) * b);
        printf("%d\n", x);
    }
    return 0;
}