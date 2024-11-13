//link to problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CLEARDAY
#include <stdio.h>

int main() {
	// x yagmur 
    // y bulut 
    int x,y;
    int clear = 0;
    scanf("%d %d ",&x,&y);
    if(x + y <= 7)
    {
        clear = 7 - x - y;
        printf("%d",clear) ;
    }
    else{
        return 0;
    }
}