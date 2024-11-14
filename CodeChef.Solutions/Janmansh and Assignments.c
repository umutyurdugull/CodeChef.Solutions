#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        int a = x + 3;
        if (a > 10)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
}