// link to problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TAXSAVING
#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d %d ", &x, &y);
        int tax = x - y;
        printf("%d\n", tax);
    }
    return 0;
}