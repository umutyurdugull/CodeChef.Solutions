// Link to problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        float ort = (a + b) / 2.0;
        
        if (ort > c) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
