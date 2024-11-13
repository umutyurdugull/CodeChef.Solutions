#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        int max_index = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[max_index] || (a[i] == a[max_index] && b[i] > b[max_index])) {
                max_index = i;
            }
        }

        printf("%d\n", max_index + 1);
    }
    return 0;
}
