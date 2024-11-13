// link to problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFCHOCO
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int c, x, y;
        scanf("%d %d %d", &c, &x, &y);
        int a = c - x;
        int money = y * a;
        printf("%d\n",money);
    }
    return 0;
}