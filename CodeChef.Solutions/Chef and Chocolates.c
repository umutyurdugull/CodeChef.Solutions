//Link to problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CCHOCOLATES
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int total = 0;
    int adet=0;
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        total = (5*x) + (10*y);
        adet = total / z;
        printf("%d ",adet);
    }

}
