//Link to problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SCALENE
#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", & a, & b, & c);
        if (a != b && a != c && b != c)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
    }
    return 0;
}