#include <stdio.h>
#include<string.h>
int main() {
	char str[] = "CIVVIX";
	int len = strlen(str);
    int j;
    int i;
    for(i = 0;i<len;i++)
    {
        for( j= 0;j + i < len;j++)
        {
            if(str[j] != str[len - 1 - i - j])
                break;
        }
        if(j + i == len) break;
    }
    for(int k = 0;k<len - i;k++) printf("%c",str[k]);
    for(int k = len - i -1;k >=0;k--) printf("%c",str[k]);

}