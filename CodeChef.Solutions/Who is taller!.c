//link to problem : https://www.codechef.com/problems/TALLER
#include <stdio.h>

int main() {
	int t =0;
	scanf("%d",&t);
	for(int i = 0;i<t;i++)
	{
	    int x = 0;
	    int y = 0;
	    scanf("%d %d",&x,&y);
	    if(x > y)
	    {
	        printf("A\n");
	    }
	    else
	    {
	        printf("B\n");
	    }
	}
	return 0;

}

