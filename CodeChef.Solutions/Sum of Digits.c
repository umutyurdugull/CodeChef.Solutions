//link to problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW006
#include <stdio.h>

int main() {
	// your code goes here
	int t = 0;
	
	scanf("%d",&t);
    
	for(int i = 0;i<t;i++)
	{
	    int n;
	    int total = 0;
	    scanf("%d\n",&n);
	    while(n!=0)
	    {
	        total += n % 10;
	    n /= 10;
	    
	    }
	    printf("%d\n",total);
	    
	}
	return 0;

}

