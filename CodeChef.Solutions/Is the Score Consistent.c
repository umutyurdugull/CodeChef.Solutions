#include <stdio.h>

int main() {
	
int t,a,b,c,d;
scanf("%d",&t);
for(int i = 0;i<t;i++)
{
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(c < a || d < b)
    {
        printf("IMPOSSIBLE\n");
    }
    else{
        printf("POSSIBLE\n");
    }
}
}