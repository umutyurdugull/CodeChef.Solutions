#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n, x;
        scanf("%d %d", &n, &x); 
        int remaining = n - x;
        int packets;

        if (remaining <= 0) {
            packets = 0;
        } else {
            packets = (remaining + 3) / 4;
        }

        printf("%d\n", packets);
    }

    return 0;
}
