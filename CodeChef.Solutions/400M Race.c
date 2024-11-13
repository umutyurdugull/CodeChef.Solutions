// link to problem : https://www.codechef.com/practice/course/sorting/SORTING/problems/RACE400M
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        float a, b, c;
        a = (float)400 / (float)x;
        b = (float)400 / (float)y;
        c = (float)400 / (float)z;
        if (a > b && a > c)
        {
            printf("Alice\n");
        }
        else if (b > a && b > c)

        {
            printf("Bob\n");
        }
        else if (c > a && c > b)
        {
            printf("Charlie\n");
        }
    }

    return 0;
}
