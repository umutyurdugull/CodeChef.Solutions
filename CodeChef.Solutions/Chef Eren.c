#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int odd = 0;  // tek 
        int even = 0; // çift
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                even += a;
            }
            else
            {
                odd += b;
            }
        }
        
        int duration = even + odd;
        printf("%d\n", duration);
    }
    return 0;
}
