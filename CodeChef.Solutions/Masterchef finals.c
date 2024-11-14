// link to problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TOP10
#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x = 0;
        scanf("%d", &x);
        if (x <= 10)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
