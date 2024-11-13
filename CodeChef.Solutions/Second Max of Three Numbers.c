//Link to problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SNDMAX
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n); 
    while (n--) {
        int nums[3];
        scanf("%d %d %d", &nums[0], &nums[1], &nums[2]); 
        qsort(nums, 3, sizeof(int), compare);
        printf("%d\n", nums[1]);
    }
    return 0;
}
