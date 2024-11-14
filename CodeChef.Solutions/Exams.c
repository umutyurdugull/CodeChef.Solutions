#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        int total_students = X * Y;
        if (2 * Z > total_students)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}