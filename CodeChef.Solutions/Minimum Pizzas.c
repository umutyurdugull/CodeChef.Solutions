#include <stdio.h>
int main()
{
    int T ;
    scanf("%d",&T);
    while(T--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int total = n * x;
        int need = total / 4;
        if(total % 4  != 0)
        {
            need++;
        }
        printf("%d\n",need);
    }
    return 0;
}