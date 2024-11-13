// link to problem : https://www.codechef.com/practice/course/sorting/SORTING/problems/TSORT
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;
    scanf("%d", &n);

    int *dizi = (int *)malloc(n * sizeof(int));
    if (dizi == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dizi[i]);
    }

    qsort(dizi, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", dizi[i]);
    }

    free(dizi);

    return 0;
}
//Vector kullandım cunku : 0≤ elements of the list  0 ≤ elements of this list ≤ 10^6
